Steam sound version 3.1 08/22/2009 by Wolf Grond (WGR)

Copyright
=========

The steam sound version 3.1 replaces version 3.0.
New in this version is the variant for the BR 52 8055, which
has a different horn than the German standard locomotives.

The steam sound is freeware.

The zip file Dampf_Sound.zip must not be changed.
However, the non-commercial distribution of the above File is allowed. No money may be taken for this!

Original wav files created by Johann Riffel.


Common.Sound folder Installation
================================

Unzip the file and copy the Dampf_Sound folder into the Trains//Trainset//Common.Sound folder for your route.

To use the original sounds add the following lines to the eng file:

In the top (wagon) section -

Sound ("..//..//..//Common.Sound//Dampf_sound//Lok_Eng.sms")

In the lower (engine) section -

Sound ("..//..//..//Common.Sound//Dampf_sound//Lok_Cab.sms")


Original German Files
=====================

The following sms files are available:

Player locomotives: Lok_Eng.sms all common two-cylinder steam locomotives,
Lok_1_Eng.sms as above, but with a high-pitched whistle
Lok_Cab.sms inside - coal-fired
Lok_1_Cab.sms as above, but with a high-pitched whistle
Lok_Oel_Cab.sms inside - oil-fired

from version 3.1
BR528055_Eng.sms for the Swiss BR 52 8055
BR528055_Cab.sms

Double heading (DT):
Lok_1400_DT.sms for Br50, Br52, Br56, Br44 only to a limited extent,
Lok_1600_DT.sms for Br38, BR41, Br65
Lok_2000_DT.sms for BR01, BR03, Br18 etc.

VZ_Loks, KI_Loks: Lok_VZ.sms all common two-cylinder steam locomotives

Tender: Tender.sms for four-axle (bogie) tenders
Tender_2.sms otherwise (Länderbahnen, e.g. BR56)

Original notes for installation:

There are two possibilities:

1st variant: (standard solution)
- Set up a SOUND folder in the MY-LOCO directory
- Extract all files from Dampf_Sound.zip there.

2nd variant: (for advanced users)
- Install Dampf_Sound in the Train Simulator \ Trains folder
- In the steam locomotive Eng's and Tender Wag's the assignments must
  adapted accordingly to the SMS file.
  Example: the standard line
                        Sound ("Lok_Eng.sms")
after
                        Sound ("..//..//..//Dampf_sound//Lok_Eng.sms")
           rewrite

  Advantage of this installation: Changes and updates only need
  in the above Folder and all locomotives operated with it
  are thus up to date.

Further detailed information can be found in "common Cab and Sound.doc";
which was kindly made available by Robert Katzenbächer (rk54)


Have fun
           Wolf Grond (WGR)