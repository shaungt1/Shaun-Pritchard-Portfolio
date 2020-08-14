
DATA=MOD3DATA;
    INFILE '/folders/myshortcuts/IntroductionToScript/RawData/train.csv/train.csv' delimiter=',' firstobs=2 ;
    INPUT Store BEST12. Dept BEST12. Date YYMMDD10. Weekly_Sales BEST12. IsHoliday $5.;
RUN;

 /*First Means group all data*/
PROC MEANS;
RUN;

 /*2nd  Means group all data*/
PROC SORT DATA=MOD3DATA OUT=SORTEDMOD3; BY Date;RUN;
PROC MEANS DATA=SORTEDMOD3;
VAR Store Dept;
CLASS Weekly_Sales;
RUN;