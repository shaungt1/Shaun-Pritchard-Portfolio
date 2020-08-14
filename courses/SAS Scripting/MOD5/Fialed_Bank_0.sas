
/* Import File banklist.csv and import to raw dataset */
PROC IMPORT OUT = FB3
    DATAFILE=  '/folders/myshortcuts/IntroductionToScript/RawData/banklist.csv'
	DBMS=CSV REPLACE;
	GETNAMES=YES;
	DATAROW=2;
RUN;

/*Sort Failed Banks Data by state */
PROC SORT DATA=FB3 OUT=Sorted_FB3; 
RUN;

/*Calulate Summary of failed banks data*/
PROC SUMMARY DATA=Sorted_FB3;
OUTPUT OUT=SUMDS;
RUN;

/*Print table of Summary of failed banks data*/
PROC PRINT noobs  DATA=SUMDS  split='*' n;
Title 'Count Of Failed Banks By State In Descending Order';
RUN;

/* Title and label for output */
Title'Count and sort banks by state in decending order';
FOOTNOTE c=black italic "Data Statistics Assignment Failed Banks 5:" "&sysdate9 &systime";

/*Run Stats MEANS to sort fialed banks by state */
PROC MEANS  N nonobs descending DATA=Sorted_FB3; 
BY descending ST ;
CLASS Bank_Name  ;
VAR Closing_Date;
RUN;






