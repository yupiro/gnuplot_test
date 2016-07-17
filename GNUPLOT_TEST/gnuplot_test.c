/*
 * gnuplot_test.c
 *
 *  Created on: 2016/07/17
 *      Author: yupiro
 */

#include <stdio.h>
#include <stdlib.h>

#define GNUPLOT_PATH  "C:/gnuplot/bin/gnuplot.exe"

int main(){
	FILE *gp;

	printf(GNUPLOT_PATH);
	gp = _popen(GNUPLOT_PATH ,"w");

//	gp = _popen("gnuplot" ,"w");
	//if(gp == null){
	//	fprintf(stderr, "Oops,I cant't find %s.", GUNPLOT_PATH);
//		exit(EXIT_FAILURE);
	//}

	fprintf(gp, "plot sin(x)\n");
	fflush(gp);

	fprintf(gp,"exit\n");
	getchar();
	_pclose(gp);
	exit(EXIT_SUCCESS);
	printf(GNUPLOT_PATH);
	return 0;

}
