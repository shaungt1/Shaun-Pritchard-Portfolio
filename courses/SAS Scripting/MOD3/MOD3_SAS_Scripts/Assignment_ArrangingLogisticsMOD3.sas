/* Developer: Shaun Pritchard */
/* Date: 7/23/20 */
/* Source Files: USPresident_Wikipedia_URLs_Thmbs_HW.csv */
/* Purpose: SAS script and read the datasets into SAS for analysis */
/* Output: Use PROC FREQ to output cloumn data */

PROC IMPORT OUT = Presfreq
    DATAFILE= '/folders/myshortcuts/IntroductionToScript/RawData/USPresident_Wikipedia_URLs_Thmbs_HW.csv'
	DBMS=CSV REPLACE;
	GETNAMES=YES;
	DATAROW=2;
RUN;
/*Logic to Find all Presidents from Ohio and calulate time they each served*/
DATA WORK.freqdata; 
SET WORK.Presfreq;
/*Frequency data ALL US presidents data*/
Proc freq data=work.Presfreq order=freq;
Title "Frequency US Presidency Analysis";
FOOTNOTE c=black italic "Data Statistics Calulated on:" &sysdate9.;
tables Home_State; 
RUN;
/*frewuency table count of president data*/
Proc freq data=work.Presfreq order=freq;
Title "Frequency Number of Presidents";
FOOTNOTE c=black italic "Data Statistics Calulated on:" &sysdate9.;
tables Home_State*Presidency / nopercent  norow nocol; 
RUN;
/*Sort president data*/
proc sort data=work.Presfreq OUT=work.x1; by Presidency; run;
/*Show total number of presidents*/
PROC print data=work.x1;
Title "Total Amount of US Presidents";
VAR President;
RUN;
/*sorted presidents from 1st to 44th*/
PROC print data=work.x1;
Title "Total Amount of US Presidents";
VAR President ;
BY Presidency;
RUN;


