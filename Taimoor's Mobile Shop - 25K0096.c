#include <stdio.h>

int main(){
	int Device_Type , Symptom_code;
	printf("Enter Device Type\n");
	printf("Enter 1 for laptop, 2 for smartphone, 3 for Router");
	scanf("%d",&Device_Type);
	  
	if (Device_Type == 1) {
	printf("You have chosen laptop, for laptop symptom code is; 10 is for not turining on, 11 is for overheating, 12 is for slow performance");
	scanf("%d",&Symptom_code);
	    if (Symptom_code == 10) {
		printf("Check power adapter and battery connections, Try a different power outlet and Remove battery and hold power button for 30 seconds");
		}
		else if (Symptom_code == 11) {
		printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.");
		}
		else if (Symptom_code == 12) {
		printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.");
	    }
	    else {
	    printf("Invalid symptom code");
	    return 0;
		}
	}
	else if (Device_Type == 2) {
	printf("You have chosen smartphone, for smartphone symptom code is; 20 is for battery draining fast, 21 is for no signal, 22 is for touch screen unresponsive");
	scanf("%d",&Symptom_code);
	    if (Symptom_code == 20) {
		printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
		}
		else if (Symptom_code == 21) {
		printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.");
		}
		else if (Symptom_code == 22) {
		printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
	    }
	    else {
	    printf("Invalid symptom code");
	    return 0;
		}
	}
	else if (Device_Type == 3) {
	printf("You have chosen router, for router symptom code is; 30 is for no internet connection, 31 is for wifi signal weak, 32 is for device can't connect'");
	scanf("%d",&Symptom_code);
	    if (Symptom_code == 30) {
		printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
		}
		else if (Symptom_code == 31) {
		printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
		}
		else if (Symptom_code == 32) {
		printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");
	    }
	    else {
	    printf("Invalid symptom code");
	    return 0;
		}
	}
	else {
		printf("Invalid device code");
		}
		return 0;
}
