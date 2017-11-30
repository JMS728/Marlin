#ifndef CONFIGURATION_LULZBOT
#define CONFIGURATION_LULZBOT

/*

   If compiling from the command line:

      build-all-taz-toolheads.sh

   Else, if compiling using Arduino IDE, edit lines 40 and 41.

   Printer Model Choices:
      Gladiola_Mini            // Lulzbot Mini (Gladiola)
      Gladiola_MiniLCD         // Lulzbot Mini (Gladiola w/ LCD)
      Hibiscus_Mini2           // Lulzbot Mini 2 (Hibiscus)
      Hibiscus_Mini2LCD        // Lulzbot Mini 2 (Hibiscus w/ LCD)
      Juniper_TAZ5             // Lulzbot TAZ 5 (Juniper, Juniperberry, Juniperbush)
      Oliveoil_TAZ6            // Lulzbot TAZ 6 (Oliveoil)
      Quiver_TAZ7              // Lulzbot TAZ 7 (Quiver)

   Mini Toolhead Choices:
      Gladiola_SingleExtruder  // Standard Single Extruder (Gladiola)
      Albatross_Flexystruder   // Flexystruder (Albatross)
      Finch_Aero               // Titan AERO (Finch)

   TAZ Toolhead Choices:
      Tilapia_SingleExtruder   // Standard Single Extruder (Tilapia)
      Kanyu_Flexystruder       // Flexystruder (Kanyu)
      Opah_Moarstruder         // Moarstruder (Opah)
      Javelin_DualExtruderV2   // Dual Extruder v2 (Javelin)
      Longfin_FlexyDually      // FlexyDually (Longfin)
      Yellowfin_DualExtruderV3 // Dual Extruder v3 (Yellowfin)
      Angelfish_Aero           // Titan AERO (Angelfish)

*/

// If compiling using the Arduino IDE, uncomment and set printer model
// and toolhead here:

//#define LULZBOT_Oliveoil_TAZ6
//#define TOOLHEAD_Tilapia_SingleExtruder

#define LULZBOT_Gladiola_MiniEinsy
#define TOOLHEAD_Gladiola_SingleExtruder

#endif /* CONFIGURATION_LULZBOT */
