# PySimlink CI Models

This repository contains all models that are used to test against PySimlink. 
The structure is as follows:

```
raw/
├─ R2021a/
│  ├─ 21a_model_1/
│  ├─ 21a_model_2/
├─ R2021b/
│  ├─ 21b_model_1/
├─ R2022a/
│  ├─ 22a_model_1/
├─ ...etc/
generated/
├─ 21a_model_1.zip
├─ 21a_model_2.zip
├─ 21b_model_1.zip
├─ 22a_model_1.zip
```

Models do not need the `_1` suffix as long as each model within the release
folder is unique (and they should be!).

## Data format
Within each `.zip` file is either the following structure 

```
model.zip/
├─ data.pkl
├─ model.zip/
```

The `data.pkl` file is a pickled dictionary containing the following keys:
- `model_length`: the number of total steps in the model. This is the result of $tFinal / step\_size$
- `tFinal`: The number of seconds the model is configured to run for
- `step_size`: the step size of the model
- `model_param`: parameter to be checked in the model (or `None` if no
  parameters exist)
  - `path`: path to the parameter
  - `value`: value of the parameter
  - `model_name`: Name of the model the parameter belongs to
- `signal`: Signal value to be checked in the model
  - `path`: Path to the signal
  - `name`: Name of the signal
  - `iteration`: Step of the model to check the value
  - `value`: Expected value of the signal
  - `model_name`: Name of the model the signal belongs to
- `block_param`: Block parameter to be checked in the model
  - `path`: Path to the block
  - `param`: Name of the parameter
  - `value`: Expected vlaue of the parameter
  - `model_name`: Name of the model the parameter belongs to

## What This Is Not
This repository does not contain a tool to automoatically generate c/c++ code 
from a Simulink Model. That process must be done using the Simulink Coder. 
This is simply a place to hold models that are used to test the PySimlink 
package, and the model source should the Simulink Models be needed in the future. 
