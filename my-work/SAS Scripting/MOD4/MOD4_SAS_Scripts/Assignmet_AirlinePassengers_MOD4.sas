/* Developer: Shaun Pritchard */
/* Date: 7/30/20 */
/* Source Files: AirPassengers.csv */
/* Purpose: SAS script and read the datasets into SAS for analysis */
/* Output:Calculate Mean, Standard deviation for each year and output the MIN and MAX numbers of passengers */


/*Bring in files*/
DATA AirPassengersMOD4;
INFILE '/folders/myshortcuts/IntroductionToScript/RawData/AirPassengers.csv ' dlm=',' firstobs=2 ;
INPUT VAR1 $4. Time BEST12.  AirPassengers BEST12.;
/*Label Fields*/
LABEL VAR1='ID';
LABEL time='Flight Time';
LABEL AirPassengers='Passengers';
/*Print Import data*/
PROC PRINT DATA=AirPassengersMOD4;
RUN;



Title'Calulation mean of sales over the holiday per store/department for each month';
FOOTNOTE c=black italic "Data Statistics Module 4:";
Get Normal Distributed data and graphic plots
PROC UNIVARIATE DATA=OutputMOD4(OBS=100);
Class Store Dept ;
WHERE IsHoliday='TRUE';
HISTOGRAM Weekly_Sales/ vaxis=Weekly_Sales haxis=MYMONTH;
INSET std min max range/HEADER='STATISTICS' POSITION=NE;
RUN;
ODS GRAPHICS off;
ODS PDF file="Mod4_Stats.pdf" style=Ocean;