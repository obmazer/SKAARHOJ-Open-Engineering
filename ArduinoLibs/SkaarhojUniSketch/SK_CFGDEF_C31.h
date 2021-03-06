#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 9	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1400 1080\" width=\"80%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1280\" height=\"764\" x=60 y=158 style=\"fill:url(#grad1);\"/><rect width=\"1400\" height=\"160\" x=0 y=0 style=\"fill:rgb(190,190,190);\" /><rect width=\"1400\" height=\"160\" x=0 y=920 style=\"fill:rgb(190,190,190);\" /><rect width=\"60\" height=\"1080\" x=0 y=0 style=\"fill:rgb(160,160,160);\" /><rect width=\"60\" height=\"1080\" x=1340 y=0 style=\"fill:rgb(160,160,160);\" /><text x=\"275\" y=\"270\" style=\"text-anchor:middle;fill:white;font-family:Verdana;font-weight:bold;font-size:50;transform:scale(1.5,1);letter-spacing:-5px;\">SKAARHOJ</text></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16118, GZIP size: 5326 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x73, 0x9B, 0x48, 0x93, 0xDF, 0x9F, 0x5F, 
	0xC1, 0x92, 0x5A, 0x5B, 0x9C, 0x90, 0x0C, 0x08, 0x24, 0x19, 
	0x8C, 0x7D, 0xB6, 0x93, 0xAC, 0x5D, 0x1B, 0x27, 0xAE, 0xC8, 
	0x49, 0xF6, 0x4E, 0xA5, 0x4A, 0x61, 0x18, 0x59, 0x24, 0x18, 
	0x74, 0x80, 0xEC, 0xF8, 0x71, 0xFC, 0xDF, 0x9F, 0xEE, 0x99, 
	0x01, 0x06, 0x84, 0x1C, 0x25, 0xBB, 0x97, 0x54, 0x34, 0xCC, 
	0x5B, 0xBF, 0x77, 0x4F, 0x4F, 0x43, 0xEE, 0xBC, 0x54, 0x3A, 
	0xFB, 0xE4, 0xBB, 0xD3, 0xA9, 0xAE, 0x1A, 0xFB, 0x96, 0x6A, 
	0x9A, 0x86, 0x2A, 0xEB, 0xB2, 0x6A, 0xCC, 0x54, 0x18, 0x31, 
	0xCD, 0x51, 0xDF, 0x64, 0x63, 0x46, 0x31, 0x66, 0xED, 0xEF, 
	0xF7, 0xC7, 0x6C, 0x6C, 0x50, 0x8C, 0x8D, 0x8D, 0x71, 0xB1, 
	0xEE, 0xF8, 0xC3, 0xD5, 0xBB, 0x62, 0x18, 0x01, 0x0E, 0x2D, 
	0x53, 0x95, 0xCD, 0x3A, 0x40, 0x3A, 0x66, 0xD5, 0x01, 0xD2, 
	0xB1, 0x61, 0x1D, 0x20, 0x1D, 0x3B, 0xFD, 0x70, 0xC5, 0x46, 
	0x4D, 0x55, 0xD7, 0xCD, 0xB1, 0x6A, 0x99, 0x9A, 0x2A, 0x5F, 
	0x9D, 0x1C, 0xBF, 0x87, 0xD1, 0xD1, 0x6C, 0xE6, 0xFC, 0xEB, 
	0x0E, 0x58, 0x08, 0xC8, 0xDD, 0x9B, 0x2C, 0xA7, 0x5C, 0xC8, 
	0xC7, 0x57, 0xAF, 0x2E, 0x64, 0x55, 0x47, 0x38, 0x96, 0x2A, 
	0x4F, 0x1E, 0xB2, 0x9C, 0xDC, 0xCA, 0xC2, 0xC2, 0xD7, 0xAB, 
	0x18, 0xF9, 0x9D, 0xEA, 0xB0, 0xF6, 0x32, 0x4D, 0x6E, 0x52, 
	0xEF, 0x56, 0x9A, 0xA4, 0xBE, 0xAC, 0xF6, 0x74, 0xB5, 0x67, 
	0xA8, 0x53, 0x59, 0x56, 0xE5, 0xB3, 0x24, 0x0A, 0xA4, 0x97, 
	0xC9, 0x7D, 0x0C, 0xCF, 0x57, 0xC9, 0xCD, 0x4D, 0x44, 0xE0, 
	0xE1, 0xF4, 0xC1, 0x87, 0x76, 0x86, 0x80, 0xE9, 0x56, 0x72, 
	0x17, 0x92, 0xFB, 0xB5, 0xAD, 0xCD, 0x55, 0x77, 0x7B, 0x97, 
	0xE9, 0xCD, 0x0F, 0x56, 0x1D, 0x7F, 0xF8, 0x4B, 0x7A, 0xB7, 
	0xCA, 0x97, 0xAB, 0x9C, 0x2F, 0x1C, 0x3C, 0x4F, 0x09, 0x1D, 
	0xFC, 0x23, 0x4D, 0x56, 0x4B, 0xE9, 0xB8, 0xDE, 0x3D, 0x59, 
	0x83, 0xFD, 0x61, 0x99, 0xE5, 0x29, 0x01, 0x1E, 0xFF, 0x24, 
	0x0F, 0x24, 0x65, 0x44, 0x98, 0x6A, 0xCF, 0x6A, 0x9D, 0x96, 
	0x5E, 0x87, 0x51, 0x54, 0xAE, 0x31, 0xDA, 0xD7, 0xC0, 0xEF, 
	0xDA, 0x12, 0xA4, 0xB0, 0x81, 0x67, 0x58, 0x21, 0x69, 0xCE, 
	0x16, 0x68, 0x86, 0x9B, 0x01, 0x70, 0x2C, 0xC2, 0x8A, 0x8B, 
	0x4B, 0x69, 0x92, 0xB3, 0x7D, 0x23, 0xB4, 0x91, 0x01, 0x4E, 
	0x6C, 0xA3, 0x2C, 0x63, 0xAC, 0xCA, 0x9D, 0x62, 0xB7, 0x44, 
	0x27, 0x94, 0x0A, 0x08, 0x98, 0x48, 0xEE, 0xA5, 0xB9, 0x3C, 
	0x2B, 0xBA, 0xAF, 0xE2, 0x00, 0x3B, 0x9A, 0xAA, 0x1B, 0x60, 
	0x69, 0xC7, 0xAB, 0x3C, 0x91, 0xCE, 0xE3, 0x9C, 0xA4, 0x77, 
	0x5E, 0x24, 0x73, 0x8C, 0xEF, 0xBD, 0x38, 0x48, 0x6E, 0x69, 
	0xAF, 0x44, 0xF8, 0x0E, 0xD1, 0xBF, 0x9B, 0xCF, 0x6B, 0x04, 
	0xD5, 0xF0, 0x9F, 0x46, 0xE1, 0x92, 0x21, 0x36, 0x6A, 0xC3, 
	0x49, 0x9C, 0xA7, 0x49, 0xC4, 0x66, 0x7A, 0x63, 0xCE, 0xED, 
	0xE9, 0x2A, 0x47, 0x21, 0x17, 0x06, 0x02, 0x54, 0x08, 0xDD, 
	0xD7, 0x57, 0x27, 0x42, 0xEF, 0x2A, 0xF5, 0xE2, 0x2C, 0xCC, 
	0xC3, 0x24, 0x06, 0x16, 0x1F, 0x90, 0x18, 0x54, 0xCE, 0x3E, 
	0xC5, 0x51, 0x9B, 0xBD, 0x4C, 0x32, 0x61, 0xDB, 0x65, 0xE4, 
	0x3D, 0x48, 0x17, 0x9E, 0x9F, 0x02, 0x64, 0x60, 0x5D, 0xD7, 
	0x90, 0x1D, 0x1C, 0x94, 0x51, 0x24, 0xC9, 0x72, 0xCD, 0xE0, 
	0xB8, 0x88, 0xB9, 0x64, 0x99, 0x24, 0xDE, 0x24, 0xB0, 0xB0, 
	0xE2, 0xF2, 0x3D, 0xF1, 0x93, 0x34, 0x60, 0x50, 0x15, 0x0A, 
	0xD6, 0xD0, 0xAA, 0xD9, 0x49, 0xB2, 0x4A, 0x7D, 0x52, 0x6A, 
	0x60, 0x2A, 0x5F, 0xEC, 0xBD, 0x92, 0x20, 0xD8, 0xD0, 0x16, 
	0x02, 0x0C, 0xF5, 0x03, 0x9D, 0xB7, 0x45, 0x7F, 0xC0, 0x5B, 
	0x93, 0xB7, 0x16, 0x6F, 0x87, 0x48, 0x42, 0x4F, 0x54, 0x5F, 
	0xEF, 0xA7, 0x95, 0x07, 0xBD, 0x8F, 0x5E, 0xFA, 0x20, 0xE5, 
	0xE1, 0x6D, 0x18, 0xDF, 0x48, 0x86, 0xF6, 0x7B, 0x63, 0xC4, 
	0x82, 0x91, 0x2D, 0xB5, 0x4C, 0xB5, 0x14, 0x84, 0x54, 0x4D, 
	0x1A, 0xFC, 0xD3, 0xB7, 0x32, 0xCE, 0x11, 0xDF, 0x25, 0x7D, 
	0x4C, 0xA2, 0xD5, 0x2D, 0x55, 0x9D, 0x26, 0x0E, 0x9F, 0x78, 
	0x91, 0x17, 0xFB, 0xE5, 0xB8, 0x61, 0x16, 0x13, 0x6F, 0xC8, 
	0x1D, 0x89, 0x32, 0x61, 0xBD, 0xA0, 0xE7, 0xF7, 0x5E, 0xCE, 
	0x8C, 0x60, 0xCA, 0x31, 0x81, 0x84, 0xC3, 0x6F, 0xF0, 0xFB, 
	0x32, 0x44, 0xAD, 0x7E, 0x0A, 0x97, 0x38, 0xF4, 0xF2, 0xE3, 
	0x2B, 0x99, 0x99, 0x12, 0x0B, 0xD6, 0x16, 0x44, 0xCB, 0xD7, 
	0x10, 0x0C, 0x49, 0x26, 0x28, 0x54, 0x61, 0x70, 0x36, 0x4D, 
	0x37, 0x22, 0xC3, 0xA5, 0x07, 0x0B, 0x70, 0x0B, 0x44, 0x06, 
	0xBD, 0x32, 0xF2, 0x35, 0xDF, 0x2E, 0xD7, 0x0D, 0xF9, 0xBA, 
	0x01, 0xC0, 0x4E, 0xFC, 0x15, 0xE5, 0x67, 0xC0, 0xF8, 0x39, 
	0x4F, 0xC3, 0xB2, 0x0B, 0xD3, 0x13, 0x12, 0x67, 0x49, 0x2A, 
	0xFD, 0xE1, 0x85, 0x31, 0x1D, 0x15, 0x78, 0xD3, 0x82, 0x6B, 
	0xF8, 0x1D, 0xD2, 0x5F, 0xDD, 0x60, 0xCD, 0x18, 0x9A, 0x19, 
	0xDF, 0xB9, 0x58, 0xE5, 0x39, 0x8B, 0x7C, 0xE2, 0x2E, 0x7D, 
	0xCF, 0xD2, 0x68, 0x33, 0x64, 0xCD, 0xC8, 0xA2, 0xCD, 0x3E, 
	0xEB, 0xE9, 0x1A, 0x6F, 0x0D, 0xDE, 0xF2, 0xC5, 0xFA, 0x98, 
	0xB5, 0x06, 0xEF, 0x0F, 0xF8, 0x6E, 0x8B, 0xAF, 0x1F, 0x19, 
	0x56, 0xB1, 0x9F, 0x6F, 0x30, 0xF9, 0x4A, 0x03, 0x47, 0x38, 
	0x49, 0x9F, 0x16, 0x61, 0x4E, 0x44, 0xDD, 0x8A, 0x84, 0x01, 
	0x68, 0xED, 0x4F, 0x6C, 0xC7, 0xAC, 0x1D, 0x68, 0xBC, 0x35, 
	0x78, 0x6B, 0xF2, 0x76, 0xC8, 0x5A, 0x93, 0xCF, 0x9B, 0x7C, 
	0x9F, 0xC9, 0xF7, 0x59, 0x7C, 0xDC, 0xE2, 0xFB, 0x2C, 0xBE, 
	0xCF, 0xE2, 0xFB, 0x86, 0x7C, 0x7E, 0xC8, 0xF7, 0x8D, 0x78, 
	0x7F, 0xC4, 0xFB, 0x63, 0xDA, 0xE7, 0x46, 0xFA, 0x26, 0x9C, 
	0xD3, 0x78, 0x64, 0x56, 0x0A, 0xFA, 0xC3, 0xBB, 0xBD, 0xF5, 
	0xD6, 0xC6, 0x98, 0x7A, 0x84, 0xA1, 0xB3, 0x15, 0x11, 0xB4, 
	0x4A, 0x83, 0x9D, 0x97, 0xE5, 0xC2, 0xD0, 0xC4, 0xCB, 0x57, 
	0xA9, 0x87, 0x86, 0x5B, 0x48, 0xE2, 0x6D, 0x92, 0xDE, 0x82, 
	0xBF, 0x82, 0x89, 0x92, 0x8C, 0x4D, 0x92, 0x40, 0x30, 0xBA, 
	0x13, 0x2F, 0xCD, 0x68, 0xF8, 0xF8, 0xB1, 0x57, 0xEE, 0x83, 
	0x3B, 0x87, 0x01, 0x49, 0xA4, 0x2B, 0x2F, 0x8A, 0xF0, 0x3C, 
	0xC1, 0x53, 0x95, 0x1F, 0xFA, 0x72, 0x79, 0x86, 0xCB, 0x2C, 
	0x11, 0xD8, 0xC3, 0x6E, 0xB1, 0x8D, 0x79, 0x59, 0xB1, 0x8D, 
	0x3A, 0x19, 0xC3, 0x7E, 0xBA, 0x48, 0x93, 0x5B, 0x0F, 0x0D, 
	0x59, 0x9A, 0x90, 0x3C, 0x87, 0x28, 0xC1, 0x88, 0xC1, 0xC8, 
	0x42, 0x7C, 0x0F, 0xCF, 0x27, 0x60, 0xE9, 0x0E, 0x23, 0x24, 
	0xB8, 0x01, 0x78, 0xCE, 0x50, 0x95, 0x4F, 0xBC, 0xF8, 0xAB, 
	0xC0, 0xC0, 0xE9, 0xE9, 0x87, 0x1F, 0xEF, 0x45, 0x49, 0xB4, 
	0x6D, 0xBE, 0x3C, 0xBF, 0xA4, 0x4E, 0x69, 0x31, 0x53, 0xA2, 
	0x5E, 0xCC, 0x0E, 0x63, 0xE0, 0x2C, 0x61, 0x11, 0x00, 0xC1, 
	0x00, 0x38, 0x80, 0x5F, 0x84, 0x39, 0xB0, 0xC7, 0xDF, 0x7B, 
	0x60, 0x08, 0xBF, 0x4B, 0xFF, 0x9B, 0x60, 0xF0, 0x43, 0x78, 
	0x2C, 0x3F, 0x5A, 0x80, 0x66, 0x59, 0x34, 0x91, 0x59, 0xDC, 
	0x04, 0x65, 0xD3, 0xDE, 0x0F, 0x4F, 0x57, 0xE9, 0xC3, 0xB2, 
	0x7C, 0xAC, 0xE2, 0xA0, 0x45, 0x23, 0x32, 0x06, 0x20, 0x80, 
	0xB6, 0x5F, 0x74, 0x7E, 0x1D, 0xD8, 0x05, 0xB9, 0x4D, 0xD2, 
	0x07, 0x94, 0x12, 0xA6, 0x3A, 0x34, 0xBF, 0x41, 0xCB, 0x00, 
	0x88, 0x18, 0x92, 0x7E, 0x1A, 0x2A, 0xDB, 0x71, 0x49, 0xD2, 
	0x2C, 0x04, 0x2B, 0xE4, 0xD6, 0xCD, 0x16, 0x6C, 0xC6, 0x04, 
	0x9C, 0xF0, 0xF8, 0xC7, 0x0E, 0x0E, 0xDE, 0xBD, 0x4A, 0xB6, 
	0x9C, 0x3B, 0x66, 0xA7, 0x52, 0x13, 0x33, 0x3D, 0xCA, 0x23, 
	0xEF, 0x86, 0x8A, 0x6A, 0x38, 0xE0, 0x1D, 0x5C, 0x08, 0xD6, 
	0xD1, 0xCE, 0x17, 0x87, 0x72, 0x1E, 0xDF, 0x11, 0x76, 0xE8, 
	0x51, 0xE5, 0xDE, 0x66, 0x54, 0xC5, 0xBC, 0x61, 0xAD, 0xC5, 
	0x5B, 0x1D, 0x7F, 0x8C, 0x8C, 0x51, 0x43, 0x91, 0x10, 0x12, 
	0x5C, 0x7B, 0xFE, 0x57, 0xA9, 0xC4, 0x26, 0x00, 0xA4, 0xAB, 
	0xE4, 0xAB, 0x90, 0x48, 0x70, 0x72, 0x9E, 0x7D, 0x3A, 0x7D, 
	0x01, 0x99, 0xB4, 0xA6, 0xB1, 0x51, 0x96, 0x4A, 0xC3, 0x79, 
	0x3A, 0xE7, 0xBC, 0x81, 0xA3, 0x4A, 0xC7, 0x3E, 0x35, 0x38, 
	0xD6, 0xFF, 0xE4, 0x85, 0xB9, 0x84, 0xC1, 0x2F, 0x93, 0x32, 
	0xC8, 0x04, 0x80, 0x6B, 0x3C, 0xFF, 0xE9, 0xD4, 0xE9, 0x2A, 
	0xCB, 0x93, 0x5B, 0xE9, 0x0C, 0x0E, 0xDF, 0x08, 0x82, 0x31, 
	0xE7, 0xFE, 0x3C, 0xF6, 0x60, 0xFF, 0x1D, 0xB7, 0x10, 0x1C, 
	0xC1, 0xCC, 0x43, 0x82, 0xAD, 0x31, 0xF1, 0x59, 0x4E, 0xC6, 
	0x8C, 0xDE, 0x8B, 0x49, 0x24, 0x9D, 0xA4, 0xE1, 0xCD, 0x22, 
	0x8F, 0x49, 0x86, 0x5E, 0x23, 0xB8, 0xE4, 0x1B, 0x38, 0xAC, 
	0xF3, 0x8C, 0x92, 0xAB, 0x14, 0xF4, 0xB2, 0x99, 0xD7, 0x61, 
	0x4C, 0xE0, 0x38, 0x8C, 0x6F, 0x88, 0x38, 0x5B, 0x5C, 0x06, 
	0x20, 0x29, 0x80, 0x5B, 0x43, 0x06, 0x97, 0x81, 0x46, 0x26, 
	0x82, 0x42, 0x39, 0x89, 0x40, 0x46, 0xB0, 0x5E, 0x35, 0xD4, 
	0x81, 0x6A, 0xAA, 0x70, 0x93, 0x51, 0x47, 0xEA, 0x18, 0x2C, 
	0x1A, 0x4E, 0x77, 0x20, 0x14, 0xFC, 0x04, 0x3C, 0x14, 0x02, 
	0x1D, 0xD8, 0xA8, 0x3E, 0x54, 0xF5, 0x91, 0xAA, 0x8F, 0x55, 
	0x7D, 0x5F, 0xC5, 0xB4, 0x03, 0x03, 0x14, 0x5A, 0x4F, 0x12, 
	0x25, 0xA9, 0x5E, 0x3C, 0x60, 0x3E, 0x73, 0x71, 0x49, 0x71, 
	0x5C, 0xE2, 0xF3, 0x64, 0xB5, 0x84, 0x93, 0x90, 0xA5, 0x44, 
	0xB8, 0x26, 0x22, 0x5E, 0x4C, 0x49, 0x60, 0x4F, 0x3F, 0x9F, 
	0x0E, 0x01, 0xE0, 0x57, 0xBA, 0x04, 0x97, 0x8D, 0xF2, 0xE9, 
	0x8E, 0x3E, 0x19, 0xE5, 0x98, 0x51, 0x8C, 0x7D, 0x04, 0x1D, 
	0xF1, 0xD6, 0xE0, 0xED, 0x80, 0xB7, 0x26, 0x6F, 0x2D, 0xDE, 
	0x0E, 0x79, 0x3B, 0xE2, 0xED, 0x98, 0xB6, 0x06, 0xDF, 0x6F, 
	0xF0, 0xFD, 0x06, 0xDF, 0x6F, 0xF0, 0xFD, 0x06, 0xDF, 0x6F, 
	0xF0, 0xFD, 0x06, 0xDF, 0x6F, 0xB0, 0xFD, 0x60, 0x45, 0xC7, 
	0xBC, 0x3D, 0xE1, 0xED, 0x29, 0x6F, 0xA9, 0xBB, 0xFD, 0x7C, 
	0x22, 0x28, 0xB3, 0xC4, 0x02, 0xF7, 0xB0, 0x27, 0xA3, 0x7C, 
	0x1A, 0x94, 0x4F, 0xE6, 0x16, 0xB9, 0x1C, 0xCF, 0xB5, 0x71, 
	0xE1, 0xCB, 0xC9, 0x9F, 0x14, 0x20, 0xB6, 0xCC, 0x26, 0x20, 
	0x5B, 0x67, 0x0A, 0xE4, 0x7D, 0x9A, 0x2D, 0xCF, 0x9E, 0x4F, 
	0xB3, 0x26, 0x18, 0xE6, 0x31, 0xFD, 0xA0, 0xA1, 0x9A, 0xA5, 
	0x5A, 0x3F, 0x6D, 0x51, 0x7F, 0xBD, 0x79, 0x8F, 0x94, 0xBD, 
	0x9A, 0xE0, 0x49, 0x71, 0x7A, 0xDC, 0x30, 0xA5, 0x0B, 0x38, 
	0x50, 0x29, 0x86, 0x8B, 0x24, 0x0E, 0xF3, 0x24, 0xDD, 0x4A, 
	0xC4, 0x94, 0xFB, 0xE3, 0xD7, 0x1F, 0x91, 0x44, 0xB0, 0x4F, 
	0x2E, 0x1A, 0x24, 0xFC, 0x24, 0xC9, 0xC1, 0x55, 0x65, 0x3C, 
	0x07, 0xF0, 0xD0, 0x97, 0xDF, 0xA3, 0xD7, 0x41, 0xFB, 0x17, 
	0xFC, 0xFB, 0x1F, 0xCA, 0x58, 0x90, 0x2F, 0x50, 0x68, 0x84, 
	0x4F, 0xC0, 0xB6, 0xBD, 0xDA, 0xA6, 0xBD, 0x72, 0xCB, 0x5E, 
	0xB9, 0x61, 0x8F, 0x2F, 0xA7, 0xE2, 0x82, 0x4C, 0x90, 0x9A, 
	0x3A, 0xB4, 0x06, 0x6F, 0x07, 0xBC, 0x35, 0x79, 0x6B, 0xF1, 
	0x76, 0xC8, 0xDB, 0x11, 0x6F, 0xC7, 0xBC, 0xDD, 0xE7, 0xAD, 
	0xAE, 0x6D, 0xC5, 0x2E, 0xD2, 0x81, 0x32, 0xFC, 0x83, 0x86, 
	0x76, 0x51, 0x67, 0x6F, 0x92, 0x7B, 0xB0, 0x8D, 0x82, 0x62, 
	0x76, 0x14, 0x64, 0xE1, 0xBF, 0x69, 0x9E, 0xEB, 0xFC, 0x6B, 
	0xBE, 0x8A, 0x69, 0x84, 0x93, 0x6E, 0x5E, 0x9D, 0x9C, 0x77, 
	0x88, 0xF2, 0x98, 0x12, 0xC8, 0x48, 0x62, 0x29, 0x80, 0x74, 
	0xF5, 0x96, 0xC4, 0x79, 0xFF, 0x86, 0xE4, 0xAF, 0x22, 0x82, 
	0x8F, 0x27, 0x0F, 0xE7, 0x01, 0xAC, 0x78, 0x2A, 0xB7, 0x64, 
	0x24, 0x3F, 0xEE, 0x10, 0x35, 0x57, 0x1E, 0xE7, 0x49, 0xDA, 
	0xC1, 0x88, 0x13, 0x4B, 0x61, 0x2C, 0xE5, 0x0A, 0xE9, 0xE3, 
	0x54, 0x9E, 0xA7, 0xE1, 0xF5, 0x2A, 0x27, 0x9D, 0x58, 0xCD, 
	0xA7, 0xF1, 0x4C, 0x71, 0x38, 0x68, 0x52, 0x83, 0xF0, 0x86, 
	0x41, 0xE0, 0x73, 0x1C, 0xE4, 0x63, 0x12, 0xFB, 0x51, 0xE8, 
	0x7F, 0xB5, 0x77, 0x29, 0x59, 0xF2, 0x3C, 0xDE, 0xED, 0xE6, 
	0xDD, 0x5D, 0x59, 0xE9, 0x67, 0x70, 0xF3, 0x8A, 0x22, 0xB8, 
	0xF3, 0x24, 0x1F, 0x21, 0xB3, 0xE9, 0x28, 0xCE, 0xAE, 0xEA, 
	0xAF, 0x52, 0x48, 0x9D, 0x6D, 0x79, 0x99, 0x84, 0x78, 0x15, 
	0x92, 0x9F, 0x04, 0x12, 0x97, 0x90, 0xB0, 0xE5, 0x17, 0x02, 
	0x5F, 0x05, 0x82, 0x39, 0xDC, 0x95, 0x6D, 0xF9, 0x45, 0x40, 
	0xFF, 0xC8, 0x2A, 0xA4, 0xEF, 0xC9, 0x57, 0x02, 0x03, 0x2C, 
	0xAF, 0x65, 0xDD, 0xDE, 0x3D, 0xB5, 0x04, 0x5B, 0x36, 0xD6, 
	0x61, 0x4E, 0x36, 0xC3, 0xF4, 0xE9, 0x1F, 0x01, 0xE6, 0x70, 
	0x38, 0x5C, 0x87, 0xA9, 0xD7, 0x60, 0xFA, 0xE9, 0xAB, 0x75, 
	0x39, 0x94, 0x3A, 0xF0, 0xE1, 0x6E, 0x91, 0x13, 0xAE, 0x06, 
	0x40, 0x0C, 0x0B, 0xC5, 0xAD, 0x93, 0xAD, 0xF7, 0xBE, 0x9D, 
	0x74, 0xE4, 0x45, 0x9E, 0x2F, 0xED, 0xBD, 0xBD, 0xFB, 0xFB, 
	0xFB, 0xFE, 0xFD, 0xA0, 0x9F, 0xA4, 0x37, 0x34, 0x75, 0xDF, 
	0xCB, 0xEE, 0x20, 0x88, 0x36, 0x40, 0x7B, 0x08, 0x59, 0x79, 
	0xF4, 0x4E, 0x3B, 0x4C, 0x0D, 0x7E, 0x9E, 0x46, 0xE1, 0xED, 
	0x8D, 0xAC, 0xA8, 0xA2, 0x19, 0xC0, 0x34, 0x45, 0x4F, 0xFA, 
	0xDE, 0x72, 0x49, 0xE2, 0xE0, 0x74, 0x11, 0x46, 0x41, 0x47, 
	0x84, 0x93, 0xE5, 0x6F, 0xBD, 0xDB, 0xD7, 0x51, 0x90, 0x55, 
	0xD6, 0x42, 0xFA, 0x21, 0x9C, 0x81, 0xE9, 0xD9, 0xD5, 0xC5, 
	0x1B, 0x17, 0x0E, 0xE8, 0x2F, 0xAE, 0xE6, 0x7C, 0x39, 0xD0, 
	0xE1, 0xA7, 0xDB, 0x55, 0xF2, 0xC3, 0x2F, 0x3B, 0x3B, 0x1D, 
	0x0A, 0x16, 0xE5, 0x22, 0x87, 0xF1, 0x12, 0xAB, 0x05, 0x8F, 
	0x61, 0x60, 0xCB, 0x14, 0xD4, 0x67, 0xB9, 0xFB, 0x45, 0x8D, 
	0xE1, 0xAE, 0x26, 0xF6, 0x33, 0xAC, 0x0D, 0xD8, 0x32, 0x95, 
	0xAF, 0x0D, 0x2C, 0x2D, 0xBF, 0x39, 0xB2, 0x0A, 0x47, 0xE0, 
	0x8A, 0xD8, 0x19, 0xE6, 0x68, 0xD9, 0xF4, 0xCB, 0xEC, 0xA8, 
	0x7C, 0xB2, 0x65, 0x90, 0x3F, 0xF0, 0x51, 0x91, 0xD1, 0x75, 
	0xE5, 0x83, 0xEB, 0x74, 0xEF, 0x50, 0x16, 0x08, 0x4F, 0xDF, 
	0x5C, 0x47, 0x82, 0xA2, 0x49, 0x3F, 0x25, 0x4B, 0x38, 0x37, 
	0x49, 0x47, 0xFE, 0x0E, 0x1A, 0x85, 0xE5, 0xB5, 0xD5, 0xF7, 
	0xE9, 0xE4, 0x84, 0x71, 0xE8, 0xBB, 0x4C, 0x60, 0xD9, 0xC9, 
	0x42, 0xEE, 0x92, 0xAE, 0x0C, 0x04, 0xE6, 0x8A, 0xEA, 0xD7, 
	0x79, 0xF6, 0xFB, 0x94, 0xE4, 0x3E, 0xA5, 0xD8, 0xBD, 0xF0, 
	0xF2, 0x45, 0x7F, 0x1E, 0x25, 0x20, 0x1B, 0x1D, 0xD5, 0x41, 
	0x09, 0xED, 0x47, 0x24, 0xBE, 0xC9, 0x17, 0x3D, 0x5D, 0xE9, 
	0xCA, 0xBF, 0xCB, 0x0E, 0x75, 0x31, 0x97, 0xCA, 0x64, 0x61, 
	0xCA, 0x8A, 0x53, 0x5B, 0x74, 0xA8, 0x83, 0xD0, 0x62, 0x01, 
	0x45, 0x7D, 0x56, 0x2B, 0x78, 0xCF, 0x67, 0xD5, 0x93, 0xAD, 
	0xB9, 0x6E, 0x7E, 0x54, 0x5C, 0x48, 0x6C, 0x96, 0xCC, 0x4A, 
	0x40, 0x2C, 0x88, 0x47, 0x51, 0x41, 0x03, 0xBE, 0x1A, 0xD3, 
	0x36, 0xAE, 0x6B, 0xA2, 0x70, 0x4F, 0x39, 0x88, 0x80, 0x65, 
	0xCA, 0xA2, 0x0A, 0xBB, 0xBA, 0x40, 0x93, 0xAC, 0xE6, 0x0F, 
	0x4B, 0xD0, 0x03, 0x78, 0x7E, 0x8E, 0x99, 0x3A, 0xD3, 0x80, 
	0xDC, 0x83, 0xF1, 0x30, 0x47, 0x05, 0xBD, 0x24, 0x11, 0xC1, 
	0xF4, 0x59, 0xF6, 0x23, 0x2F, 0xCB, 0x00, 0x29, 0x09, 0x72, 
	0xAA, 0x8B, 0x67, 0xD0, 0xF8, 0xCB, 0x87, 0x2D, 0xF1, 0x9C, 
	0x5E, 0x96, 0x88, 0x4E, 0x93, 0xE5, 0xC3, 0xCF, 0xA1, 0x09, 
	0xE3, 0x6C, 0x4B, 0x34, 0xE7, 0x6F, 0x27, 0x25, 0x9E, 0xF3, 
	0x38, 0xC3, 0xDC, 0xB2, 0xC2, 0x04, 0x60, 0x24, 0x8E, 0xCD, 
	0x29, 0x22, 0x63, 0xEA, 0x6A, 0x6A, 0x08, 0x46, 0x1E, 0x1E, 
	0x4C, 0xFE, 0xFC, 0x7C, 0x71, 0xFC, 0xD7, 0xF1, 0xE9, 0xD5, 
	0xF9, 0xBB, 0xB7, 0x13, 0x27, 0x04, 0x7B, 0x0F, 0xE7, 0x1D, 
	0x2A, 0x6A, 0x4A, 0x54, 0xB6, 0xF4, 0x62, 0x6E, 0xEB, 0xF3, 
	0xD8, 0xA7, 0xB4, 0xF4, 0x28, 0x2D, 0xF0, 0x1B, 0x72, 0xFA, 
	0xD7, 0x97, 0x62, 0xFD, 0x67, 0x7D, 0x29, 0x68, 0x37, 0xDC, 
	0xD9, 0x41, 0x1D, 0x7F, 0xFF, 0x7E, 0xF6, 0xE9, 0x6E, 0x4A, 
	0x66, 0x3B, 0x3B, 0xAC, 0x05, 0xDD, 0x0B, 0x8F, 0xD3, 0x10, 
	0x7A, 0xDA, 0x6F, 0x6E, 0x47, 0xB7, 0x6A, 0x83, 0x53, 0x6D, 
	0xA6, 0x28, 0x41, 0xFA, 0x3A, 0x9E, 0xA0, 0x59, 0xAB, 0xA1, 
	0xE2, 0x90, 0x28, 0x23, 0x12, 0xD0, 0xFB, 0x5B, 0x0A, 0x4E, 
	0xE1, 0xEA, 0xD4, 0x22, 0x3D, 0xB7, 0x08, 0xD2, 0x4D, 0x72, 
	0x15, 0x07, 0x88, 0xF5, 0x36, 0x99, 0x0E, 0x85, 0x2B, 0x08, 
	0x1B, 0x7E, 0xC3, 0x67, 0x44, 0xDE, 0x45, 0x79, 0x3E, 0x09, 
	0x71, 0x8F, 0xDA, 0x44, 0xFD, 0xF8, 0x71, 0xCB, 0xB0, 0xF7, 
	0x7F, 0x2B, 0x92, 0x3E, 0x4C, 0xC0, 0xD4, 0x7C, 0x48, 0x18, 
	0x8E, 0xA3, 0xA8, 0x23, 0x83, 0x67, 0x64, 0x60, 0xD4, 0xA0, 
	0x08, 0x27, 0x3D, 0x88, 0xB9, 0x5B, 0x38, 0x29, 0xC8, 0x3F, 
	0x9E, 0xA6, 0x33, 0xEE, 0x8B, 0x77, 0x61, 0x16, 0x5E, 0x87, 
	0x51, 0x98, 0x3F, 0xB8, 0x32, 0x7D, 0x86, 0x23, 0xD4, 0x09, 
	0xB3, 0xD4, 0x77, 0x89, 0xFA, 0x05, 0x9B, 0xBC, 0x22, 0x80, 
	0x59, 0x0B, 0x25, 0x80, 0x09, 0xED, 0xFB, 0xF7, 0x0E, 0x7B, 
	0x70, 0xA7, 0x33, 0x45, 0x2D, 0x05, 0xE9, 0xE2, 0x13, 0xC2, 
	0xE0, 0x22, 0xA7, 0x8F, 0x53, 0x84, 0x36, 0x3B, 0x6A, 0xF4, 
	0xED, 0xE9, 0x4C, 0x2D, 0xA3, 0x88, 0xF3, 0xFF, 0xC3, 0xD6, 
	0x22, 0x0C, 0x02, 0x12, 0xCB, 0x15, 0x1F, 0xD4, 0x87, 0x05, 
	0x36, 0x20, 0x8C, 0x54, 0xB4, 0x23, 0x27, 0x25, 0x45, 0x22, 
	0xEF, 0x61, 0xDE, 0x51, 0x1E, 0xEF, 0xD3, 0x30, 0x27, 0xA7, 
	0x93, 0x49, 0xA7, 0x22, 0x96, 0x14, 0xD6, 0x00, 0x4B, 0x81, 
	0xAE, 0x1C, 0xE8, 0xCA, 0x0F, 0xCE, 0x3E, 0xF9, 0x05, 0x65, 
	0x39, 0x50, 0xF6, 0xC8, 0xB8, 0x7A, 0xD4, 0xED, 0x29, 0xD6, 
	0x31, 0x75, 0xBC, 0x44, 0x19, 0xF0, 0x6C, 0xC1, 0xB3, 0x05, 
	0xCF, 0x03, 0x78, 0x1E, 0x41, 0xA2, 0x38, 0x32, 0x67, 0xAA, 
	0x29, 0xAC, 0xB1, 0xEC, 0xE9, 0x58, 0x53, 0xC7, 0xF0, 0x34, 
	0xB4, 0xA7, 0x43, 0xB8, 0xEE, 0xC1, 0xD3, 0x08, 0xE6, 0xE1, 
	0x51, 0x37, 0xE1, 0x59, 0xD7, 0xEC, 0x29, 0x44, 0x7E, 0xC8, 
	0x2A, 0xB1, 0x83, 0xD0, 0xF7, 0xE1, 0x86, 0x8A, 0xF7, 0x25, 
	0xDD, 0xA2, 0xCB, 0xE0, 0x01, 0x76, 0x1A, 0x74, 0x2D, 0x6C, 
	0x34, 0xE9, 0xD4, 0x3E, 0x9F, 0x32, 0x70, 0x37, 0xA0, 0x1D, 
	0xE0, 0x33, 0x6C, 0x1E, 0xC0, 0x5E, 0xA4, 0xC0, 0x00, 0xD2, 
	0x2C, 0x20, 0x81, 0x8E, 0x0F, 0xE8, 0xB8, 0x45, 0x29, 0x06, 
	0xD2, 0x86, 0x23, 0x8B, 0x8D, 0x5B, 0x74, 0x1C, 0xBA, 0xF0, 
	0x4C, 0x89, 0x83, 0x45, 0x63, 0x78, 0x06, 0x2C, 0xD6, 0x18, 
	0x08, 0xC5, 0x35, 0x63, 0x80, 0x4F, 0x37, 0x02, 0x46, 0x6B, 
	0x30, 0x00, 0x3E, 0x11, 0xA3, 0x09, 0x69, 0x32, 0xAC, 0x1C, 
	0x00, 0x46, 0x03, 0xD2, 0xE4, 0xD1, 0x78, 0x04, 0x1D, 0x40, 
	0x09, 0x0F, 0x40, 0x86, 0x0E, 0x1D, 0x14, 0x87, 0x09, 0xD9, 
	0xB3, 0x81, 0x5B, 0x00, 0xA9, 0xA5, 0x41, 0xE2, 0x6C, 0x1A, 
	0xD0, 0x19, 0xE3, 0x0C, 0x50, 0x86, 0x0C, 0x0D, 0xF6, 0x91, 
	0x79, 0x10, 0x18, 0x02, 0x05, 0x49, 0xE2, 0x98, 0x05, 0xCF, 
	0x26, 0xF2, 0x81, 0x34, 0x5A, 0x88, 0x01, 0x3A, 0x26, 0xED, 
	0x00, 0x9C, 0xC1, 0x68, 0x04, 0x83, 0xD8, 0x01, 0x8A, 0xC7, 
	0x96, 0xAE, 0x0E, 0x86, 0x80, 0x6E, 0x08, 0x7B, 0x00, 0x20, 
	0x60, 0x00, 0xDE, 0x87, 0x3A, 0xEB, 0x18, 0x06, 0xA0, 0x1B, 
	0xC1, 0xCC, 0x3E, 0x97, 0x3A, 0x8E, 0x83, 0xD8, 0x51, 0xD0, 
	0x23, 0x54, 0x9D, 0x01, 0x5C, 0xC0, 0xF3, 0x18, 0x11, 0x42, 
	0x76, 0x6F, 0x20, 0xAD, 0x63, 0x58, 0x34, 0x1E, 0x19, 0xAA, 
	0x39, 0x1E, 0xCE, 0x9E, 0x9C, 0xEC, 0x3E, 0xCC, 0xFD, 0x05, 
	0x98, 0x96, 0x8F, 0xC1, 0xC5, 0x9C, 0x29, 0x8F, 0x01, 0x99, 
	0x7B, 0xAB, 0x28, 0xB7, 0x21, 0x9E, 0xC4, 0xD3, 0x72, 0x7C, 
	0x36, 0xD5, 0x67, 0x0A, 0x0B, 0x99, 0x34, 0xB5, 0x91, 0x53, 
	0xBC, 0x2A, 0xAB, 0x8F, 0xDF, 0x6C, 0xBE, 0x44, 0x9F, 0xF5, 
	0x6A, 0xCB, 0xB5, 0xD9, 0x9E, 0xA1, 0x3E, 0x14, 0xB3, 0x46, 
	0x63, 0x56, 0xC7, 0xD9, 0xF4, 0x9B, 0x0D, 0x97, 0x90, 0xF4, 
	0x01, 0x7F, 0x59, 0x82, 0xD0, 0x80, 0xA0, 0x2E, 0x68, 0xF6, 
	0x6E, 0x37, 0xB6, 0x3E, 0xF1, 0x88, 0x27, 0x92, 0xE3, 0x87, 
	0x29, 0x4D, 0xAC, 0x1F, 0x7D, 0x81, 0x22, 0xD5, 0x17, 0x08, 
	0x50, 0xD3, 0x26, 0xF8, 0x3D, 0x03, 0x92, 0x3D, 0x2E, 0x00, 
	0x4C, 0xAA, 0x68, 0xDE, 0xCB, 0x73, 0xD3, 0x14, 0x73, 0x2E, 
	0x0C, 0x17, 0xA5, 0x5C, 0x7C, 0x0F, 0x50, 0x82, 0x2D, 0xD7, 
	0x57, 0x4E, 0x3A, 0x1B, 0xC5, 0xD1, 0x69, 0xA0, 0xEB, 0x0D, 
	0x34, 0xA5, 0x21, 0x93, 0xA6, 0x84, 0x7B, 0x16, 0x5D, 0xF2, 
	0x43, 0xC1, 0x00, 0xA8, 0x0D, 0xB2, 0x01, 0x08, 0x78, 0xC6, 
	0x00, 0xED, 0xCE, 0x35, 0xE4, 0x98, 0x5F, 0x1D, 0x4A, 0x36, 
	0x38, 0x11, 0x6B, 0x0D, 0xDE, 0x9A, 0xDB, 0xB3, 0xD1, 0x14, 
	0xDA, 0xA0, 0xC6, 0xC1, 0xD0, 0xE8, 0x5B, 0x9C, 0x46, 0x48, 
	0x90, 0x0A, 0xA2, 0x74, 0xC3, 0x6A, 0xA3, 0x42, 0xE7, 0xD8, 
	0x07, 0xBC, 0xB5, 0xB6, 0xA7, 0x82, 0xE2, 0x11, 0x10, 0x77, 
	0x9B, 0xE6, 0x34, 0x00, 0xCE, 0x0B, 0x42, 0x0C, 0xAB, 0x24, 
	0x44, 0x6B, 0x15, 0xC7, 0x68, 0x7B, 0xC4, 0x06, 0xE8, 0xE0, 
	0x39, 0xBC, 0x66, 0x6F, 0x34, 0x2E, 0x45, 0x60, 0x1A, 0x95, 
	0x08, 0xAC, 0x51, 0x1B, 0xE6, 0xFD, 0x0D, 0x98, 0xB7, 0xB2, 
	0x5F, 0x7D, 0x34, 0xE6, 0x30, 0xD5, 0xBF, 0x03, 0x45, 0x1B, 
	0xFE, 0x03, 0x50, 0x06, 0x66, 0x1B, 0x7B, 0xE3, 0xBF, 0xC3, 
	0xDE, 0xFE, 0xB8, 0x05, 0xE4, 0x60, 0x13, 0xC8, 0x16, 0x5D, 
	0x59, 0x35, 0x55, 0xF5, 0xF4, 0xD2, 0x22, 0x2A, 0x77, 0x19, 
	0x94, 0x06, 0xB1, 0x81, 0xF9, 0x75, 0xB0, 0x5D, 0x4B, 0x43, 
	0x7F, 0xDB, 0x1E, 0xB2, 0x48, 0xBE, 0xB5, 0x29, 0x60, 0xB4, 
	0x4A, 0xA4, 0xAB, 0x83, 0xB5, 0x35, 0xA4, 0x32, 0xFE, 0x69, 
	0x82, 0xB1, 0xE4, 0x5E, 0x23, 0x77, 0xDF, 0x6A, 0x09, 0x29, 
	0x86, 0xE0, 0xAE, 0xFB, 0xBF, 0x84, 0xA3, 0xAB, 0xD7, 0x5C, 
	0xB2, 0x37, 0xD2, 0x5A, 0xD0, 0xE8, 0xA3, 0x0A, 0x8D, 0xD9, 
	0x2A, 0x21, 0xFD, 0x97, 0x6D, 0x86, 0x8A, 0xEB, 0x97, 0x24, 
	0xA4, 0x37, 0x24, 0x84, 0xC2, 0xF8, 0xC7, 0x45, 0x34, 0xAE, 
	0x47, 0x2C, 0xC3, 0xDA, 0x80, 0xE6, 0xC7, 0x22, 0xFA, 0x89, 
	0x70, 0xAD, 0x37, 0x9D, 0x60, 0x9F, 0x9E, 0x27, 0x16, 0x62, 
	0xB4, 0x4A, 0xA3, 0xAD, 0xAC, 0x76, 0x6C, 0xFE, 0xBC, 0xF0, 
	0xEA, 0x21, 0xB1, 0x37, 0x1A, 0xF6, 0xAD, 0x35, 0x1C, 0x86, 
	0x18, 0x0A, 0x07, 0x6D, 0x4C, 0x0D, 0xB7, 0x67, 0xCA, 0x6C, 
	0xA8, 0x6B, 0xA4, 0xAF, 0xE1, 0xC3, 0xF4, 0xAB, 0x14, 0xA2, 
	0xF1, 0x0B, 0x01, 0xAE, 0x3B, 0x30, 0xEA, 0xBE, 0xD7, 0x1B, 
	0x1B, 0x5B, 0x18, 0xD7, 0x76, 0xB0, 0xBA, 0x75, 0x58, 0x4F, 
	0x45, 0x5E, 0xEE, 0xBB, 0x7C, 0xC9, 0x00, 0x2E, 0x05, 0x4B, 
	0xB8, 0x0A, 0x60, 0x0D, 0x43, 0xE1, 0x77, 0xD2, 0x32, 0x3B, 
	0x0F, 0x8B, 0xEC, 0xBC, 0xC8, 0x76, 0x72, 0xF2, 0xAD, 0x21, 
	0xA2, 0x9A, 0xA5, 0x99, 0x83, 0xEE, 0x50, 0xFB, 0xAF, 0xB0, 
	0x07, 0x3F, 0x05, 0x0C, 0xC8, 0x2A, 0xE8, 0xAE, 0x9E, 0x17, 
	0xFB, 0x8B, 0x24, 0x85, 0xFB, 0xF0, 0x2D, 0xDC, 0x38, 0x90, 
	0x70, 0x5E, 0x1F, 0x63, 0x25, 0xB6, 0x79, 0x12, 0xE7, 0xBD, 
	0x7B, 0x56, 0x33, 0x85, 0xBB, 0x5E, 0x12, 0x05, 0xC5, 0x20, 
	0x16, 0x27, 0x61, 0x68, 0x60, 0xC1, 0x85, 0xCF, 0x49, 0xFB, 
	0x08, 0x0B, 0x5F, 0xAB, 0xC2, 0xF5, 0xC7, 0xF5, 0xE1, 0x52, 
	0x5A, 0x49, 0x27, 0xA5, 0x0C, 0x3E, 0x4F, 0xED, 0x7A, 0xAA, 
	0xD8, 0x35, 0x9F, 0x4D, 0x8C, 0x8E, 0x1A, 0xFD, 0x66, 0x42, 
	0x04, 0x59, 0x53, 0x17, 0x44, 0xBE, 0xCE, 0x0B, 0x27, 0x1B, 
	0x5F, 0xA8, 0x97, 0x95, 0xBF, 0xA2, 0xBC, 0xD8, 0x2C, 0xFE, 
	0x0D, 0x97, 0x58, 0x47, 0xA7, 0xDA, 0xED, 0x25, 0x69, 0x40, 
	0x50, 0x4A, 0x6C, 0xC9, 0x3A, 0xCF, 0x79, 0x57, 0x6F, 0xB0, 
	0xEC, 0x14, 0x2C, 0x03, 0xC7, 0x41, 0x78, 0x57, 0x56, 0x0B, 
	0xE0, 0x16, 0xFD, 0x44, 0xAF, 0xDC, 0x44, 0x4D, 0x15, 0x7E, 
	0x35, 0x67, 0xC5, 0xA2, 0x01, 0x5C, 0xAB, 0xB1, 0xCA, 0x20, 
	0x54, 0x87, 0x76, 0x0F, 0xB0, 0x7C, 0x20, 0xD1, 0xFB, 0xA1, 
	0x5B, 0x71, 0x00, 0x29, 0xCD, 0xF2, 0x9B, 0x23, 0x28, 0xC7, 
	0x8E, 0x69, 0x71, 0xC8, 0xC1, 0xF7, 0x67, 0xA1, 0xEF, 0x45, 
	0x3D, 0x2F, 0x0A, 0x6F, 0x62, 0x3B, 0x4F, 0x96, 0x8E, 0x7C, 
	0xF8, 0x62, 0xB7, 0xDB, 0x01, 0xFA, 0x94, 0xEE, 0xAE, 0xB4, 
	0x13, 0x5F, 0x67, 0x4B, 0x47, 0x3A, 0xD8, 0x43, 0xB0, 0x87, 
	0xD2, 0x01, 0x10, 0x26, 0x85, 0x81, 0x2B, 0x47, 0xD7, 0x51, 
	0xF0, 0x99, 0x55, 0x6F, 0x25, 0x5A, 0x20, 0xC1, 0x21, 0xF9, 
	0x70, 0xB7, 0x4B, 0x6B, 0x6B, 0xA5, 0x4D, 0x2A, 0x5D, 0xF9, 
	0x60, 0x0F, 0xF6, 0x1C, 0xCA, 0x6A, 0x12, 0x47, 0x61, 0x4C, 
	0x98, 0x19, 0x66, 0xEE, 0x5A, 0x05, 0x10, 0x00, 0x62, 0x39, 
	0x8D, 0xD7, 0xFF, 0x8A, 0x1E, 0x2B, 0x19, 0x30, 0xFD, 0xB3, 
	0x82, 0x41, 0x09, 0xBA, 0xA8, 0x0C, 0xCE, 0xA3, 0xC4, 0xCB, 
	0x6D, 0xFA, 0x8E, 0x4D, 0x7E, 0xE2, 0xA5, 0x89, 0x4C, 0x51, 
	0xB3, 0x7A, 0xB1, 0x5A, 0x4E, 0xE2, 0xAF, 0xE4, 0x61, 0x85, 
	0x2F, 0x0A, 0xE8, 0x45, 0x76, 0x97, 0x32, 0x40, 0x0B, 0x14, 
	0xBB, 0x8A, 0x20, 0x3F, 0x4A, 0x7E, 0xBE, 0x08, 0xB3, 0x3E, 
	0x45, 0xA7, 0x38, 0xB2, 0xF2, 0x04, 0x20, 0x53, 0xD5, 0xAB, 
	0xEE, 0xC2, 0x11, 0x38, 0x57, 0x74, 0x50, 0xAB, 0xC3, 0x39, 
	0x51, 0xE1, 0x61, 0x9E, 0xA8, 0xC0, 0xB2, 0x76, 0x34, 0x3F, 
	0x95, 0x55, 0x5A, 0xE7, 0xC4, 0xCA, 0x61, 0x4E, 0x2B, 0x87, 
	0x11, 0x23, 0x16, 0x21, 0xB3, 0xAB, 0x78, 0xAE, 0x46, 0x1C, 
	0x17, 0x85, 0x70, 0x9D, 0x8A, 0x00, 0xFC, 0x28, 0xA5, 0x85, 
	0x12, 0xF1, 0x2E, 0x4E, 0x29, 0x00, 0x67, 0x0F, 0x18, 0xCA, 
	0x8C, 0xD6, 0x0F, 0xAA, 0x82, 0xEA, 0xEA, 0x56, 0xAE, 0xAA, 
	0xA9, 0xD0, 0x79, 0x52, 0xD4, 0xA4, 0x69, 0x5D, 0x59, 0xFE, 
	0x12, 0x85, 0x86, 0x9C, 0x21, 0x57, 0xBA, 0x76, 0x18, 0x51, 
	0x56, 0x80, 0x8C, 0x40, 0x8D, 0xC9, 0xBD, 0xF4, 0x6E, 0x89, 
	0x85, 0x81, 0x0E, 0x2B, 0x21, 0x66, 0xB6, 0x04, 0x74, 0xAB, 
	0x91, 0xAA, 0xA9, 0x35, 0xEE, 0x5D, 0x37, 0x3A, 0xD2, 0x6D, 
	0x4D, 0x69, 0x29, 0x5D, 0x56, 0x35, 0xE2, 0xA4, 0xBE, 0x87, 
	0x56, 0xBC, 0x88, 0x1A, 0xF0, 0x36, 0x01, 0x36, 0xD6, 0x34, 
	0xE6, 0x2F, 0xF0, 0x1D, 0x28, 0xF5, 0xB3, 0x02, 0x0A, 0x53, 
	0x1E, 0x90, 0xBD, 0x0B, 0x71, 0xB0, 0xA6, 0x26, 0x47, 0x14, 
	0x4D, 0xB8, 0x04, 0x58, 0x58, 0xEB, 0x2C, 0x3D, 0x45, 0x94, 
	0x65, 0x9E, 0x46, 0x05, 0xD7, 0xA2, 0xEF, 0xC8, 0xFC, 0x9B, 
	0xB6, 0x88, 0xA4, 0xD2, 0xF9, 0x65, 0xF9, 0xAD, 0x83, 0xCC, 
	0x28, 0xF4, 0xD6, 0xCB, 0xCA, 0x87, 0xE7, 0x97, 0x36, 0xB8, 
	0xC6, 0xF5, 0x21, 0xAB, 0x30, 0xAB, 0x28, 0x42, 0xB3, 0x92, 
	0x60, 0x4B, 0x9D, 0x1B, 0x51, 0x9F, 0x5F, 0xA2, 0xF6, 0xB9, 
	0x6A, 0x84, 0x81, 0x5A, 0xA5, 0xDB, 0x12, 0x0B, 0xDD, 0xB8, 
	0xE8, 0x74, 0x7E, 0x03, 0x61, 0x6A, 0x1A, 0xCD, 0xD6, 0xEA, 
	0xDB, 0x83, 0xC3, 0xE8, 0x48, 0x96, 0xFA, 0x12, 0x70, 0x26, 
	0x3B, 0x8D, 0x22, 0x7C, 0x51, 0xFD, 0xE6, 0x3F, 0x87, 0x93, 
	0xD5, 0x75, 0x4C, 0x72, 0xE9, 0xC2, 0xCB, 0xBE, 0xDA, 0x3F, 
	0x45, 0x78, 0x46, 0x37, 0x0A, 0x84, 0x0B, 0x03, 0x3F, 0x26, 
	0x5C, 0xDF, 0x8E, 0x70, 0xD4, 0x20, 0xAB, 0x2C, 0xB1, 0x2F, 
	0x63, 0xC5, 0xE2, 0x12, 0xC4, 0x39, 0x36, 0x88, 0xDE, 0xAF, 
	0xCD, 0x0E, 0x5D, 0x30, 0x2E, 0x71, 0xE0, 0xC0, 0xD5, 0xCD, 
	0x9A, 0x07, 0xD2, 0xE8, 0x28, 0xAA, 0xB7, 0x5A, 0x0D, 0xA7, 
	0x1D, 0x57, 0xA9, 0x18, 0x4E, 0x45, 0x76, 0x61, 0xED, 0xAB, 
	0x58, 0x88, 0x47, 0x55, 0x9F, 0x45, 0x24, 0x7F, 0x41, 0xFC, 
	0xAF, 0xD7, 0xC9, 0x37, 0x0C, 0x6B, 0xBC, 0xF0, 0xC9, 0x2C, 
	0x13, 0x16, 0x9E, 0x5F, 0x5E, 0x97, 0x81, 0x65, 0xAD, 0x4E, 
	0xC7, 0x62, 0x0B, 0xDD, 0x4E, 0x82, 0xA3, 0x5D, 0x5E, 0x8C, 
	0xDC, 0xB5, 0x77, 0x59, 0xFD, 0x6E, 0x17, 0x2C, 0x19, 0xE3, 
	0x42, 0xB1, 0x02, 0x89, 0x46, 0x01, 0x62, 0x5D, 0xB7, 0x7C, 
	0xC4, 0xC2, 0x86, 0x48, 0xFF, 0x5D, 0xD3, 0xAB, 0x2B, 0x22, 
	0x0A, 0xDD, 0x04, 0x21, 0x24, 0x07, 0xDE, 0x83, 0x2D, 0x85, 
	0x34, 0x0A, 0xF7, 0xAE, 0xA3, 0xC4, 0xFF, 0xEA, 0x48, 0x15, 
	0x61, 0xE8, 0xD9, 0x9D, 0x0D, 0xC8, 0x8E, 0xE4, 0x6C, 0x91, 
	0xDC, 0x83, 0x96, 0x78, 0x8D, 0x11, 0x82, 0x3A, 0xA5, 0x92, 
	0xA9, 0x84, 0x2D, 0x43, 0xFD, 0xE8, 0xAE, 0x20, 0x63, 0x63, 
	0xA6, 0x50, 0x95, 0xD6, 0x6C, 0x51, 0x5A, 0x33, 0xB5, 0xBB, 
	0x75, 0x53, 0xA3, 0xD4, 0x7F, 0x2E, 0xAA, 0xCD, 0x51, 0xA5, 
	0x81, 0xDA, 0xE8, 0x66, 0xA3, 0xAB, 0x48, 0x8F, 0xBA, 0x3A, 
	0xB5, 0xBA, 0xBB, 0x8D, 0x56, 0xC7, 0xCA, 0x40, 0x75, 0x1A, 
	0x3B, 0x13, 0x92, 0x86, 0x5E, 0xA4, 0xC8, 0xEC, 0xCC, 0xBD, 
	0x13, 0xAB, 0xD3, 0x55, 0xD5, 0x3C, 0x2E, 0x12, 0xAA, 0x0D, 
	0x55, 0xF2, 0x98, 0xCA, 0x27, 0xAD, 0xBF, 0x1B, 0xD2, 0x7E, 
	0x73, 0x61, 0x5F, 0x5A, 0xF7, 0xCF, 0x05, 0xBA, 0xA0, 0xC3, 
	0x92, 0xB9, 0x96, 0x40, 0x4E, 0xA2, 0xE8, 0x26, 0xF4, 0x3F, 
	0x97, 0x2F, 0x9C, 0xE8, 0x6F, 0x5C, 0x78, 0xE1, 0x86, 0xD9, 
	0x22, 0x76, 0xDA, 0x32, 0xD6, 0x7C, 0xE9, 0xEC, 0x6C, 0x4A, 
	0xA7, 0xB1, 0x89, 0xB1, 0xD1, 0x66, 0x6E, 0xE7, 0x99, 0xC9, 
	0x1D, 0xDD, 0x52, 0xBE, 0x0B, 0x27, 0xE1, 0xA1, 0x76, 0xA4, 
	0x0F, 0x21, 0xC6, 0x3B, 0x72, 0x71, 0x6E, 0xF9, 0xC5, 0xAB, 
	0x24, 0xE1, 0x98, 0xF0, 0xF0, 0xE3, 0x19, 0x0D, 0xFE, 0x3E, 
	0xFB, 0x5E, 0x22, 0x86, 0x9E, 0x3E, 0xAC, 0x0D, 0xA0, 0x99, 
	0x69, 0xB6, 0xAE, 0xB4, 0xC0, 0x4C, 0x52, 0xA9, 0x93, 0xE1, 
	0xF7, 0x5E, 0xF8, 0x1D, 0xCC, 0x2F, 0x82, 0xA6, 0xA7, 0x13, 
	0x3D, 0x3C, 0xC3, 0x76, 0x19, 0x83, 0xFE, 0x36, 0x8B, 0xB8, 
	0x65, 0xB2, 0x10, 0x42, 0xA8, 0x38, 0x14, 0x5E, 0x42, 0x89, 
	0xC5, 0x7C, 0xAC, 0xEF, 0x05, 0x41, 0x47, 0xA4, 0x1F, 0xCE, 
	0x2F, 0x59, 0x78, 0x65, 0xE4, 0xB9, 0x53, 0x10, 0x10, 0xA4, 
	0x2F, 0xE0, 0x08, 0x59, 0x23, 0xD0, 0x65, 0xE0, 0x14, 0xF5, 
	0x2C, 0x83, 0x7F, 0xF9, 0x3F, 0xCD, 0x66, 0x62, 0xA6, 0xC1, 
	0x3C, 0x8F, 0x4F, 0x40, 0x68, 0x45, 0x7D, 0x61, 0x62, 0x44, 
	0xF0, 0xE9, 0xFB, 0x77, 0x8D, 0x3A, 0x62, 0x6D, 0x9A, 0x59, 
	0x6B, 0xE0, 0xFE, 0x50, 0x78, 0xF5, 0x97, 0x45, 0x54, 0x7A, 
	0x4A, 0xE9, 0xD7, 0x19, 0xC5, 0x54, 0x9F, 0xD7, 0x67, 0xFC, 
	0xF8, 0x77, 0x02, 0x7C, 0xBD, 0xEB, 0x4E, 0xC5, 0xB5, 0x6A, 
	0x34, 0xA3, 0x1A, 0x0D, 0x45, 0x8D, 0x56, 0x0B, 0xE0, 0xA2, 
	0x23, 0x63, 0xE4, 0xA9, 0x53, 0x0B, 0xE1, 0x59, 0x84, 0xC1, 
	0xB2, 0x25, 0x50, 0x7C, 0x00, 0x2A, 0x0C, 0xD2, 0x8F, 0xD1, 
	0xE4, 0x13, 0xF3, 0x40, 0xD5, 0xA3, 0x91, 0x10, 0x0B, 0xCB, 
	0x6A, 0xB8, 0x39, 0x79, 0xA0, 0x5B, 0x1A, 0x6F, 0xA4, 0x62, 
	0xFA, 0x46, 0x4A, 0x11, 0x1D, 0x1B, 0x17, 0xB5, 0x38, 0x76, 
	0xBB, 0xFA, 0x15, 0xD5, 0x77, 0xD3, 0x3E, 0x53, 0x7A, 0x36, 
	0x4D, 0xFB, 0xCC, 0x9C, 0x48, 0x70, 0x1E, 0x07, 0xE4, 0xDB, 
	0x8C, 0x79, 0x4C, 0x71, 0x1F, 0xFB, 0x0C, 0xA8, 0x9E, 0x7D, 
	0x93, 0x54, 0x0E, 0x17, 0x6F, 0x66, 0x44, 0xF9, 0x8A, 0x93, 
	0xD0, 0x5D, 0x9B, 0x47, 0x3F, 0x06, 0x95, 0xF9, 0xA8, 0xF8, 
	0x4E, 0x49, 0x72, 0x5B, 0x50, 0x50, 0x76, 0x76, 0x9E, 0x9F, 
	0xAF, 0x3B, 0xBA, 0xDA, 0xD4, 0xB2, 0x0F, 0x3F, 0x0E, 0x73, 
	0xA1, 0x0D, 0x31, 0xAF, 0x13, 0xC3, 0xA5, 0x01, 0x5C, 0x60, 
	0x67, 0xE7, 0xB7, 0xB0, 0x8A, 0x71, 0x3B, 0x3B, 0xD4, 0x00, 
	0xB6, 0x7F, 0x5D, 0x48, 0xC1, 0xFC, 0xE8, 0x95, 0xA1, 0x5A, 
	0xBD, 0x28, 0x54, 0x6B, 0x46, 0x81, 0x92, 0x50, 0x91, 0xD6, 
	0xA6, 0x76, 0xD9, 0x02, 0x88, 0x5B, 0xE0, 0xB4, 0x8F, 0xE2, 
	0x1B, 0xCE, 0xB5, 0xB7, 0xAC, 0x69, 0x3D, 0x71, 0x10, 0xB2, 
	0x93, 0x4D, 0x4E, 0x0B, 0x0E, 0xE9, 0xD7, 0xBD, 0x84, 0xBD, 
	0xBE, 0x8C, 0x5D, 0xC3, 0x89, 0x05, 0x27, 0x86, 0x8B, 0x6E, 
	0xB1, 0x2D, 0x5E, 0xF3, 0xE3, 0x10, 0x25, 0xCD, 0x48, 0x8B, 
	0xDA, 0xA3, 0x14, 0x50, 0xDA, 0xD0, 0x5A, 0xDA, 0x8C, 0x55, 
	0x9B, 0x97, 0x3C, 0x7F, 0x26, 0xA4, 0x55, 0xF4, 0x77, 0xAB, 
	0xA8, 0xEF, 0xB4, 0xBD, 0xA2, 0x2F, 0x6E, 0x59, 0x11, 0x4B, 
	0x3F, 0x02, 0xF7, 0x38, 0x4D, 0xBD, 0x87, 0x7E, 0x98, 0xD1, 
	0x76, 0x9D, 0x23, 0xB8, 0x76, 0x04, 0x47, 0xCD, 0x51, 0x10, 
	0x91, 0xDD, 0x1C, 0x53, 0xEF, 0xDC, 0x5E, 0xD2, 0xD3, 0xF1, 
	0xE0, 0xC4, 0x7B, 0x33, 0x7E, 0x08, 0xEC, 0xBA, 0x68, 0x02, 
	0xC9, 0x5C, 0x4A, 0xCA, 0xC0, 0x78, 0x06, 0x3A, 0x38, 0x3B, 
	0x68, 0xEE, 0x2D, 0xC4, 0x7A, 0xC6, 0xF2, 0x8A, 0xA8, 0x11, 
	0x70, 0xEA, 0xB8, 0xCF, 0x66, 0xEA, 0xD9, 0x8F, 0x4E, 0x92, 
	0xB4, 0xD1, 0x43, 0xE7, 0x73, 0xCF, 0xF8, 0x3D, 0x07, 0xF3, 
	0x06, 0xAA, 0xA8, 0x4F, 0x2E, 0x44, 0xBD, 0x35, 0x62, 0xD7, 
	0x10, 0x6E, 0xA0, 0xB6, 0xA7, 0xB3, 0x54, 0x6B, 0xDB, 0xC5, 
	0xEB, 0x52, 0xDC, 0xBC, 0x96, 0x46, 0x56, 0xC8, 0x71, 0xD4, 
	0x25, 0xD6, 0x82, 0xE6, 0x1D, 0xED, 0x30, 0xD9, 0xD9, 0xE1, 
	0xDF, 0x8E, 0x4E, 0xEF, 0x66, 0x0D, 0x71, 0x56, 0x13, 0xCF, 
	0x09, 0xF2, 0x53, 0xB7, 0x5A, 0xF7, 0xB7, 0x85, 0x08, 0x84, 
	0x9D, 0x75, 0xA9, 0xB2, 0x93, 0x43, 0xED, 0xFB, 0xF7, 0xA0, 
	0x45, 0x12, 0x90, 0xD6, 0xAF, 0x8D, 0xE9, 0x22, 0xE9, 0xED, 
	0x76, 0x85, 0x0C, 0xB9, 0x9D, 0x96, 0x39, 0x7D, 0x66, 0x27, 
	0xCA, 0x06, 0xCE, 0xCE, 0xFE, 0x29, 0x6E, 0x02, 0x81, 0xBE, 
	0xE4, 0xD0, 0xD5, 0x8E, 0x0C, 0x5B, 0xDF, 0x6C, 0xB0, 0x60, 
	0xEE, 0xDB, 0x9A, 0xEC, 0xF2, 0x97, 0xE8, 0x5B, 0x16, 0xF4, 
	0x75, 0xBB, 0x4F, 0x4F, 0xB4, 0x7C, 0xFA, 0x24, 0x7E, 0xDB, 
	0x54, 0xBC, 0xE9, 0x7F, 0x2C, 0x6A, 0x0A, 0xF4, 0x03, 0x24, 
	0x31, 0xFA, 0x5D, 0x27, 0xC1, 0xC3, 0x23, 0x2D, 0x1D, 0xCD, 
	0xBD, 0xDB, 0x30, 0x7A, 0xB0, 0x8F, 0x31, 0x3D, 0x56, 0xCF, 
	0x20, 0xD6, 0x10, 0xAC, 0x1D, 0xA9, 0x99, 0x17, 0x67, 0xBD, 
	0x0C, 0x92, 0xE6, 0xB9, 0xD3, 0xBB, 0x27, 0xD7, 0x5F, 0xC3, 
	0xBC, 0xB7, 0x4C, 0xB1, 0x06, 0xE6, 0xE3, 0x17, 0xC4, 0x3D, 
	0x2F, 0xF8, 0xB2, 0xCA, 0x72, 0x9B, 0x7C, 0xF3, 0xFC, 0xDC, 
	0x79, 0xC2, 0x32, 0x5A, 0x2D, 0xFF, 0x5D, 0x0C, 0xA4, 0x47, 
	0xE9, 0x9A, 0x96, 0xCB, 0x6C, 0xE9, 0xC5, 0x80, 0xFE, 0x91, 
	0xB2, 0x24, 0x0A, 0x03, 0x49, 0x87, 0xAC, 0x5E, 0x5A, 0x42, 
	0x3E, 0x05, 0xCE, 0x65, 0x5B, 0xD8, 0xB9, 0xF5, 0xD2, 0x9B, 
	0x30, 0xB6, 0x25, 0xC3, 0x92, 0x34, 0x09, 0xFE, 0x39, 0x12, 
	0x7E, 0x13, 0x7E, 0x93, 0x26, 0xAB, 0x38, 0x60, 0xE8, 0xEC, 
	0x17, 0xD7, 0xFB, 0xF8, 0xD7, 0xE1, 0x30, 0x7B, 0xA9, 0x17, 
	0x84, 0xAB, 0x8C, 0x6D, 0x5F, 0xC7, 0xDE, 0x8F, 0xAE, 0xA5, 
	0xC7, 0x02, 0x3B, 0xE0, 0xE3, 0x98, 0xF1, 0xE3, 0x3E, 0xF8, 
	0xD3, 0x04, 0x32, 0x40, 0x20, 0x6B, 0x18, 0xA5, 0x17, 0x84, 
	0xFE, 0xA9, 0x68, 0x05, 0xD2, 0xE8, 0xDF, 0x8A, 0xE0, 0x62, 
	0x60, 0xC3, 0x45, 0x8C, 0x55, 0x56, 0x69, 0x09, 0xCE, 0x27, 
	0xF8, 0xB9, 0x23, 0xEC, 0x0C, 0x63, 0x56, 0x58, 0x84, 0xCD, 
	0x78, 0xBD, 0x69, 0xA1, 0x1D, 0xAF, 0xD7, 0x28, 0xBC, 0x35, 
	0x11, 0x78, 0x81, 0x3F, 0x0F, 0xC6, 0xAD, 0xFC, 0xCE, 0x4F, 
	0x61, 0x07, 0xAB, 0x99, 0x45, 0x64, 0x9E, 0x3B, 0x95, 0xE8, 
	0xF7, 0xE9, 0x9F, 0x36, 0xD1, 0x1B, 0xAD, 0x6C, 0x97, 0x5C, 
	0xB7, 0xC8, 0xA8, 0x8D, 0xD8, 0x28, 0x05, 0xCC, 0x7E, 0x44, 
	0xBC, 0x94, 0x63, 0x7E, 0x92, 0x5A, 0xC9, 0x5B, 0x98, 0xB0, 
	0xAE, 0x54, 0x34, 0x85, 0xB6, 0xBE, 0xF0, 0x05, 0x9A, 0x70, 
	0xB9, 0xAE, 0x97, 0x27, 0x4B, 0x50, 0x1F, 0xFD, 0x3A, 0xB0, 
	0x65, 0xF1, 0xC2, 0x40, 0x9E, 0xCB, 0x5A, 0xA8, 0x64, 0xE2, 
	0x3A, 0x51, 0xE6, 0x52, 0x29, 0xF4, 0x02, 0xAD, 0x06, 0xF6, 
	0x05, 0xF0, 0xD0, 0xC2, 0x0A, 0x29, 0xE8, 0x56, 0xBB, 0x18, 
	0x34, 0x62, 0x06, 0xD7, 0xA6, 0x23, 0xB1, 0xEE, 0x3D, 0xFE, 
	0x27, 0xA9, 0x6D, 0x8D, 0x2F, 0x3B, 0x59, 0xE5, 0xD2, 0xE3, 
	0x92, 0xFF, 0xFF, 0x17, 0x5B, 0x9A, 0x87, 0xDF, 0x48, 0x80, 
	0x9B, 0xF1, 0xAB, 0x64, 0x5B, 0xA2, 0x64, 0xD2, 0xCA, 0x26, 
	0x7F, 0x6E, 0x31, 0x3D, 0xF3, 0xF4, 0xF8, 0xB5, 0xA5, 0x15, 
	0xD8, 0x25, 0x8E, 0xBE, 0x34, 0x44, 0x1D, 0xF6, 0x49, 0x8C, 
	0xF2, 0x36, 0x7E, 0xE9, 0x58, 0x80, 0xFF, 0xFD, 0xD1, 0x63, 
	0x14, 0xC4, 0x49, 0x0C, 0xDB, 0x37, 0x58, 0x69, 0x21, 0x1D, 
	0x13, 0x60, 0x52, 0xC5, 0xF0, 0x6F, 0x74, 0x25, 0xFE, 0x8D, 
	0x6E, 0x93, 0x6D, 0x5C, 0xD8, 0x66, 0xB7, 0xF8, 0x25, 0xDD, 
	0xA3, 0x50, 0x7B, 0x60, 0x75, 0x05, 0xD0, 0x5C, 0x9F, 0x04, 
	0xF9, 0xA3, 0x50, 0xD0, 0x75, 0x2A, 0x86, 0x81, 0xD5, 0xF9, 
	0x7C, 0xEE, 0x14, 0x8C, 0x69, 0x92, 0x01, 0x1A, 0x32, 0x1C, 
	0x4E, 0x52, 0xD1, 0x6D, 0x73, 0x57, 0x66, 0xDF, 0x82, 0x6F, 
	0x33, 0x43, 0x6F, 0x53, 0x25, 0xF7, 0x9B, 0x36, 0xB7, 0x59, 
	0x4A, 0x8F, 0x85, 0xC8, 0x8B, 0xFD, 0x82, 0x45, 0xE9, 0xED, 
	0x1E, 0xFA, 0xDF, 0xB7, 0x24, 0x08, 0x3D, 0x89, 0x46, 0x43, 
	0x30, 0x41, 0xAE, 0xEF, 0x52, 0xBA, 0x28, 0x6C, 0xE9, 0xB7, 
	0xF0, 0x76, 0x99, 0xA4, 0xB9, 0x17, 0x43, 0x70, 0x7C, 0x92, 
	0xD9, 0x1D, 0x15, 0x3F, 0x49, 0xEB, 0xE9, 0xEC, 0xD3, 0x34, 
	0xCC, 0x87, 0xE8, 0x67, 0x59, 0xCE, 0x7F, 0x00, 0x9D, 0xBA, 
	0xB0, 0x16, 0xF6, 0x3E, 0x00, 0x00, 
};

	// Default Controller Configuration (len=76)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x3A, 0x06, 0x05, 0x61, 0x02, 0x00, 0x01, 0x00, 0x06, 
	0x05, 0x61, 0x02, 0x00, 0x02, 0x00, 0x06, 0x05, 0x61, 0x02, 
	0x00, 0x03, 0x00, 0x04, 0x03, 0x21, 0x0F, 0x00, 0x06, 0x05, 
	0x61, 0x02, 0x00, 0x04, 0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 
	0x05, 0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 0x06, 0x00, 0x04, 
	0x03, 0x21, 0x0E, 0x00, 0x04, 0x03, 0x21, 0x12, 0x00, 0xFF, 
	0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 
	0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_SLIDER 1
SkaarhojBI8 buttons;