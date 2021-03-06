From afb123618b087f3ca2305b84fb004624662e52f0 Mon Sep 17 00:00:00 2001
From: David Seifert <soap@gentoo.org>
Date: Wed, 26 Feb 2020 11:07:29 +0100
Subject: Fix GCC 10 / -fno-common

* GCC 10 switches its default symbol emission mode
  to cause linker errors when an object is defined
  more than once.

Bug: https://bugs.gentoo.org/706756
Signed-off-by: David Seifert <soap@gentoo.org>
Signed-off-by: Hans Verkuil <hverkuil-cisco@xs4all.nl>
---
 lib/include/libdvbv5/desc_t2_delivery.h |  2 +-
 lib/libdvbv5/dvb-v5.h                   | 26 +++++++++++++-------------
 2 files changed, 14 insertions(+), 14 deletions(-)

diff --git a/lib/include/libdvbv5/desc_t2_delivery.h b/lib/include/libdvbv5/desc_t2_delivery.h
index 93594b76..8c11fa9a 100644
--- lib/include/libdvbv5/desc_t2_delivery.h
+++ lib/include/libdvbv5/desc_t2_delivery.h
@@ -215,7 +215,7 @@ extern const unsigned dvbt2_transmission_mode[];
  * @brief converts from internal representation to string the SISO_MISO
  *	  field of dvb_desc_t2_delivery:SISO_MISO field.
  */
-const char *siso_miso[4];
+extern const char *siso_miso[4];
 
 #ifdef __cplusplus
 }
diff --git a/lib/libdvbv5/dvb-v5.h b/lib/libdvbv5/dvb-v5.h
index 45aaddda..3540bac1 100644
--- lib/libdvbv5/dvb-v5.h
+++ lib/libdvbv5/dvb-v5.h
@@ -14,17 +14,17 @@ struct fe_status_name {
 	char *name;
 };
 extern struct fe_status_name fe_status_name[8];
-const char *fe_code_rate_name[14];
-const char *fe_modulation_name[15];
-const char *fe_transmission_mode_name[10];
-const unsigned fe_bandwidth_name[8];
-const char *fe_guard_interval_name[12];
-const char *fe_hierarchy_name[6];
-const char *fe_voltage_name[4];
-const char *fe_tone_name[3];
-const char *fe_inversion_name[4];
-const char *fe_pilot_name[4];
-const char *fe_rolloff_name[5];
-const char *dvb_v5_name[72];
-const char *delivery_system_name[20];
+extern const char *fe_code_rate_name[14];
+extern const char *fe_modulation_name[15];
+extern const char *fe_transmission_mode_name[10];
+extern const unsigned fe_bandwidth_name[8];
+extern const char *fe_guard_interval_name[12];
+extern const char *fe_hierarchy_name[6];
+extern const char *fe_voltage_name[4];
+extern const char *fe_tone_name[3];
+extern const char *fe_inversion_name[4];
+extern const char *fe_pilot_name[4];
+extern const char *fe_rolloff_name[5];
+extern const char *dvb_v5_name[72];
+extern const char *delivery_system_name[20];
 #endif
-- 
cgit v1.2.1

