# Advanced Analytics Course Module 4

![](RackMultipart20201204-4-6l32u1_html_237499165a11f2b9.gif)

PROC MEANS AND PROC UNIVARIATE

**PROC MEANS**

**PROC MEANS** the data summarization tools to compute descriptive statistics across all observations. It performs following calculations.

- Calculate descriptive statistics based on moments
- Estimates median
- Calculate confidence limits for the mean
- Perform a t test

**SAS Example**

DATA STUDENTSCORE;

INPUT CourseID Score;

DATALINES;

1501 100

1501 45

1501 66

1501 43

1501 67

1501 90

1501 91

2001 95

2001 96

2001 98

2001 99

2001 89

2001 59

;

proc means data=STUDENTSCORE;

run;

![](RackMultipart20201204-4-6l32u1_html_e791da1c8f06972c.png)

**PROC UNIVARIATE:** It provides the statistics for summarizing the data distributions of each analysis variable. It supports normality tests to check normal distribution. It generates multiple plots such as histogram and box plot. It can calculate extreme observations with five lowest and five highest values.

**SAS Example**

DATA STUDENTSCORE;

INPUT CourseID Score;

DATALINES;

1501 100

1501 45

1501 66

1501 43

1501 67

1501 90

1501 91

2001 95

2001 96

2001 98

2001 99

2001 89

2001 59

;

proc univariate data=STUDENTSCORE;

run;

![](RackMultipart20201204-4-6l32u1_html_fa3f8340cf331eec.png)

![](RackMultipart20201204-4-6l32u1_html_df194470314b28f8.png)

![](RackMultipart20201204-4-6l32u1_html_1996846115274921.png)