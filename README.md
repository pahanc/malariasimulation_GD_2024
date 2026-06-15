[![R build status](https://github.com/mrc-ide/malariasimulation/workflows/R-CMD-check/badge.svg)](https://github.com/mrc-ide/malariasimulation/actions)
[![codecov](https://codecov.io/github/mrc-ide/malariasimulation/branch/master/graphs/badge.svg)](https://codecov.io/github/mrc-ide/malariasimulation)

# malariasimulation

This is a modified version of Imperial College London's `malariasimulation` model that imports a time series of the daily relative emergence of adult females generated from a separate mosquito metapopulation model, as described in Hancock, P.A., North, A. et al. The modifications were made to `malariasimulation` version 1.6.0, available [here](https://github.com/mrc-ide/malariasimulation/releases/tag/v1.6.0).

The model is defined in this package, whereas the simulation is executed using the [individual](https://github.com/mrc-ide/individual) package.

## Installation

> **Note:** `malariasimulation` is only compatible with R >= 4.0.0

The package can be installed from GitHub using the `remotes` library (this method requires RTools/RBuildTools):

```R
library('remotes')
install_github('pahanc/malariasimulation_import_mosq')
```

The following R packages are required:

- `individual` v0.1.17
- `malariaEquilibrium` v1.0.1
- `malariasimulation` v1.6.0

## Usage

To run this modified version of `malariasimulation`, files containing site-specific model parameters are required. These files are located in the GitHub repository [inputs-for-malariasimulation_GD_2024](https://github.com/pahanc/inputs-for-malariasimulation_GD_2024). Input files generated from the mosquito metapopulation model developed in Hancock, P.A., North, A. et al. are also required. Example input files are in the subdirectory **Mosquito timeseries**.

### File naming convention

Subfolder `A` refers to trial Design A. Within folder `A` there are 63 subfolders containing mosquito suppression time series for 9 values of the fitness parameter ω and 7 values of the dispersal parameter ρ.

The **first digit** of the folder name denotes the fitness parameter ω:

| Digit | ω value |
|:-----:|:-------:|
| 1 | 1.0 |
| 2 | 0.9 |
| 3 | 0.8 |
| 4 | 0.7 |
| 5 | 0.6 |
| 6 | 0.5 |
| 7 | 0.4 |
| 8 | 0.3 |
| 9 | 0.2 |

The **second digit** of the folder name denotes the dispersal rate ρ:

| Digit | ρ value |
|:-----:|:-------:|
| 1 | 0.001 |
| 2 | 0.00224 |
| 3 | 0.005 |
| 4 | 0.0112 |
| 5 | 0.025 |
| 6 | 0.056 |
| 7 | 0.125 |

For example, folder `5200` contains mosquito suppression time series for ω = 0.6 and ρ = 0.00224.

### Running the model

To run the modified `malariasimulation` model with default parameters, use the function `run_site` (in `run_site_2026.R`, from [inputs-for-malariasimulation_GD_2024](https://github.com/pahanc/inputs-for-malariasimulation_GD_2024)):

```R
output <- run_site(
  total_M = total_M,
  human_population = human_population,
  supp_gam = supp_gam,
  supp_gam_filename = supp_gam_filename,
  emerge_gam_filename = emerge_gam_filename,
  ntsp_prop = ntsp_prop
)
```

where:

- **`total_M`** — estimated maximum abundance of the total vector population (including all species) over the simulation period (see Hancock, P.A., North, A. et al.).
- **`human_population`** — number of humans being modelled in a settlement.
- **`supp_gam`** — boolean indicating whether gene drive releases in *An. gambiae* + *An. coluzzii* occur.
- **`supp_gam_filename`** — path to the file containing the mosquito suppression time series predicted using the spatial metapopulation model (note: the root directory will need to be changed in `parameters.R`).
- **`emerge_gam_filename`** — path to the file containing the time series of normalised daily mosquito emergence (note: the root directory will need to be changed in `parameters.R`).
- **`ntsp_prop`** — proportion of the mosquito population comprised of vector species that are not gene drive targets.

#### Example

```R
total_M <- 100000
human_population <- 1500
supp_gam <- TRUE
supp_gam_filename <- "inputs-for-malariasimulation_GD_2024/input files/Mosquito timeseries/A/1100/mosq_supp_gamb_1100_1.csv"
emerge_gam_filename <- "inputs-for-malariasimulation_GD_2024/input files/Mosquito timeseries/Emerge_gam_Feb26.csv"
ntsp_prop <- 0

output <- run_site(
  total_M = total_M,
  human_population = human_population,
  supp_gam = supp_gam,
  supp_gam_filename = supp_gam_filename,
  emerge_gam_filename = emerge_gam_filename,
  ntsp_prop = ntsp_prop
)
```

The output daily malaria prevalence values are given by:

```R
plot(output, type = 'l', xlab = "Day", ylab = "Prevalence")
```

## License

[MIT](https://choosealicense.com/licenses/mit/)
