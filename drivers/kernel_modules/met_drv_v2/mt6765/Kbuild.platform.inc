################################################################################
# Include Path
################################################################################
#MET_VCOREDVFS_INC := $(srctree)/drivers/misc/mediatek/base/power/include/vcorefs_v3
MET_PTPOD_INC := $(srctree)/drivers/misc/mediatek/base/power/cpufreq_v1/src/mach/$(MTK_PLATFORM)/

################################################################################
# Feature Spec
# CPUPMU_VERSION: V8_0/V8_2
# EMI_SEDA_VERSION: SEDA2/SEDA3/SEDA3_5
################################################################################
CPUPMU_VERSION := V8_0
EMI_SEDA_VERSION := SEDA3

################################################################################
# Feature On/Off
################################################################################
FEATURE_SPMTWAM := n
FEATURE_EVENT_POWER := n
FEATURE_ONDIEMET := y
FEATURE_TINYSYS := n
