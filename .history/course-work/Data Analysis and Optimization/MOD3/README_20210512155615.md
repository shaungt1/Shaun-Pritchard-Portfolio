# Module 3 Data Analysis and Optimization

QMB4400 Section 01(5.5 Weeks) - Online Plus - 2021 Spring Quarter Term 1

![](RackMultipart20210512-4-oo7s6o_html_237499165a11f2b9.gif)

#### **Objectives**

By the end of this module you should be able to:

- Appraise the importance of data integrity.
- Create JSON files with Pandas.
- Assess data integrity issues into the script input data.

Review the script below. You will see nan values for many rows.

import pandas as pd

import numpy as np

sample\_data = {&#39;Student\_Fname&#39;: [&#39;dave&#39;, np.nan, np.nan, &#39;tom&#39;, np.nan],

&#39;Student\_Lname&#39;: [&#39;Manson&#39;, np.nan, np.nan, &#39;Tuttle&#39;, np.nan],

&#39;Student\_Grade&#39;: [40, np.nan, 50, 60, 10]}

df = pd.DataFrame(sample\_data , columns = [&#39;Student\_Fname&#39;, &#39;Student\_Lname&#39;, &#39;Student\_Grade&#39;])

print(df)

**Script Output**

![](RackMultipart20210512-4-oo7s6o_html_febf5240b43b3183.png)

![](RackMultipart20210512-4-oo7s6o_html_7472a28e29da5d7f.png)

You can use fillna(0) function to replace all the NaN values into the above script and correct the errors.


