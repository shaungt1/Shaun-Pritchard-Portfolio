/* Developer: Shaun Pritchard */
/* Date: 7/30/20 */
/* Source Files: trian.csv */
/* Purpose: SAS script and read the datasets into SAS for analysis */
/* Output:Calulate the UNIVARIATE normal distribution data and ODS graphical data */

ODS GRAPHICS ON;
DATA OutputMOD4;
INFILE '/folders/myshortcuts/IntroductionToScript/RawData/train.csv/train.csv ' dlm=',' firstobs=2 ;
INPUT Store :BEST32. Dept :BEST32.  Date :YYMMDD10. Weekly_Sales :BEST32. isHoliday :$5.;
FORMAT Date yymmdd10.;
MYMONTH = MONTH(Date);
RUN;
PROC PRINT DATA=OutputMOD4(OBS=5);
RUN;

/*Get Normal Distributed data and grpahic plots*/
PROC UNIVARIATE DATA=OutputMOD4;
Class Store;
WHERE IsHoliday='TRUE';
HISTOGRAM Weekly_Sales/ vaxis=Weekly_Sales haxis=MYMONTH;
/* INSET std min max/HEADER='STATISTICS' POSITION=NE;  */
RUN;
ODS GRAPHICS off;

/* Inset SKEWNESS KURTOSIS; */
/* Sort data by date */
/* PROC SORT DATA=WORK.Output7 OUT=Work.output_sort;BY Date; run; */
/* Show Stats for weekly sales department and store sorted by date */
/* PROC MEANS DATA=Work.output_sort; */
/* Title"Mean Stats (For Max and Min values)"; */
/* FOOTNOTE c=black italic  "Data Statistics Module 4:" &sysdate9.; */
/* VAR  Weekly_Sales Store Dept; */
/* Class isHoliday; */
/* FORMAT Weekly_Sales dollar10.2 Date :YYMMDD10. ; */
/* RUN; */
