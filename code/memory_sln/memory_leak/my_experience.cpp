#include"stdafx.h"
#include<stdio.h>
#include"my_experience.h"
#define VLD_FORCE_ENABLE

#include "vld.h"

void memory_leak() {
	//VLDSetOptions(VLD_OPT_TRACE_INTERNAL_FRAMES | VLD_OPT_SKIP_CRTSTARTUP_LEAKS, 256, 64);
	//VLDSetReportOptions(VLD_OPT_REPORT_TO_FILE, L"my_memory.log");
	//VLDSetReportOptions(VLD_OPT_REPORT_TO_DEBUGGER | VLD_OPT_REPORT_TO_STDOUT, NULL);
	printf("function: memory_leak, start....\n");
	double* arr = new double[100];
	arr[0] = 200;
	printf("arr=%lf\n", arr[0]);
	printf("function: memory_leak, finish....\n");
	//VLDReportLeaks(); // at this point should report 9 leaks;
}