[![R build status](https://github.com/mrc-ide/malariasimulation/workflows/R-CMD-check/badge.svg)](https://github.com/mrc-ide/malariasimulation/actions)
[![codecov](https://codecov.io/github/mrc-ide/malariasimulation/branch/master/graphs/badge.svg)](https://codecov.io/github/mrc-ide/malariasimulation)

# malariasimulation

This is a modified version of Imperial College London's malariasimulation model to import a time series of the daily relative emergence of adult females generated from a separate mosquito metapopulation model, as described in Hancock, P.A, North, A et al.. The modifications were made to malariasimulation version 1.6.0 which is available here: https://github.com/mrc-ide/malariasimulation/releases/tag/v1.6.0.

The model is defined in this package, whereas the simulation is executed using
the [individual](https://github.com/mrc-ide/individual) package.

## Installation

Please note, malariasimulation is only compatible with R >= 4.0.0

The package can be installed from github using the "remotes" library. Note, this method requires RBuildTools

library('remotes')
install_github('pahanc/malariasimulation_import_mosq')
The following R packages are required:

individual v0.1.17
malariaEquilibrium v1.0.1
malariasimulation v1.6.0"

## Usage

To run this modified version of malariasimulation, files containing site specific model parameters are required. These files are located in the github repository https://github.com/pahanc/inputs-for-malariasimulation_GD_2024 . Input files generated from the mosquito metapopulation model developed in Hancock, P.A., North, A. et al. are also required.  Example input files are in the subdirectories **Mosquito timeseries** . File names and paths can be interpreted as follows:
Subfolder "A" refers to trial Design A. Within folder "A" there are 63 subfolders containing mosquito suppression time series for 9 values of the fitness parameter 'omega' and 7 values of the dispersal parameter 'rho'. The first digit of the folder name denotes the fitness parameter:
1: \omega = 1.0
2: \omega = 0.9
3: \omega = 0.8
4: \omega = 0.7
5: \omega = 0.6
6: \omega = 0.5
7: \omega = 0.4
8: \omega = 0.3
9: \omega = 0.2
The second digit of the folder name denotes the dispersal rate:
1: \rho = 0.001
2: \rho = 0.00224
3: \rho = 0.005
4: \rho = 0.0112
5: \rho = 0.025
6: \rho = 0.056
7: \rho = 0.125

So, for example, folder 5200 contains mosquito suppression timeseries for \omega=0.6 and \rho=0.0024

To run the modified malariasimulation model with the default parameters, you
can execute the function "run_site" (in run_site_2026.R in https://github.com/pahanc/inputs-for-malariasimulation_GD_2024) :

```R
output<-run_site(total_M=total_M,human_population=human_population,
                 supp_gam=supp_gam,
                 supp_gam_filename=supp_gam_filename,
                 emerge_gam_filename=emerge_gam_filename,ntsp_prop=ntsp_prop)
```
where
*  **total_M** is the estimated maximum abundance of the total vector population (including all species) over the simulation period (see Hancock, P. A., North, A. et al.).
*   **human_population** is the number of humans being modelled in a settlement.
*   **supp_gam** is boolean indicating whether gene drive releases in An. gambiae + An. colluzzii occur
*   **supp_gam_filename** is the path to the file containing the mosquito suppression timeseries predicted using the spatial metapopulation model
(note that the root directory will need to be changed in the file parameters.R)
*   **emerge_gam_filename** is the path to the file containing the timeseries of normalised daily mosquito emergence
(note that the root directory will need to be changed in the file parameters.R)
*   **ntsp_prop** is the proportion of the mosquito population comprised of vector species that are not gene drive targets

For example, 
```R
total_M=100000;human_population=1500;supp_gam=TRUE;
supp_gam_filename="inputs-for-malariasimulation_GD_2024/input files/Mosquito timeseries/A/1100/mosq_supp_gamb_1100_1.csv"; 
emerge_gam_filename="inputs-for-malariasimulation_GD_2024/input files/Mosquito timeseries/Emerge_gam_Feb26.csv";
ntsp_prop=0

output<-run_site(total_M=total_M,human_population=human_population,
                 supp_gam=supp_gam,
                 supp_gam_filename=supp_gam_filename,
                 emerge_gam_filename=emerge_gam_filename,ntsp_prop=ntsp_prop)
```

The output daily malaria prevalence values are given by:

```R
plot(output,type='l',xlab="Day",ylab="Prevalence")
```

## License
[MIT](https://choosealicense.com/licenses/mit/)
