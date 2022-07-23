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
