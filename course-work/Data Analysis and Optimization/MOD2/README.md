# Module 2 Data Analysis and Optimization

QMB4400 Section 01(5.5 Weeks) - Online Plus - 2021 Spring Quarter Term 1

![](RackMultipart20210512-4-887ggl_html_237499165a11f2b9.gif)

#### **Objectives**

By the end of this module you should be able to:

- Validate linear algebra with NumPy.
- Create NumPy-Masked arrays.
- Implement random number functions with NumPy.

Please refer to the below script. It performs matrix addition.

#### **Sample Script**

import numpy as np

a = np.array([[1,2],[4,5],[3,10],[1,4]])

b = np.array([[3,5],[1,4],[1,7],[3,10]])

print(&quot;Matrix a&quot;)

print(a)

print(&quot;Matrix b&quot;)

print(b)

print(&quot;Matrix a+b&quot;)

print(a+b)

![](RackMultipart20210512-4-887ggl_html_7472a28e29da5d7f.png)

**Script Output**

![](RackMultipart20210512-4-887ggl_html_d4ec756c609f5015.png)

#### **Combine various operators**

import numpy as np

a = np.array([[1],[2],[1]])

b = np.array([[0],[1],[0]])

c = np.array([[3],[4],[7]])

print(3 \* a + b - c / 3)

**Output**

![](RackMultipart20210512-4-887ggl_html_1407102feee6a659.png)

#### **Masked Array**

import numpy as np

import numpy.ma as ma

x = np.array([2, 5, 10, -1, 15])

mx = ma.masked\_array(x, mask=[0, 0, 0, 1, 0])

print(mx.mean())

**Output**

![](RackMultipart20210512-4-887ggl_html_b499c7cda7a3ab33.png)