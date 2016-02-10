#ifndef __INPUT_SYSTEM_LOCAL_H_INCLUDED__
#define __INPUT_SYSTEM_LOCAL_H_INCLUDED__

#include <stdbool.h>

#include <input_system_global.h>

typedef struct mipi_port_state_s	mipi_port_state_t;

#define _REG_GP_CH_ID_FMT_TYPE_IDX		44

/*
 * For each MIPI port
 */
#define _HRT_CSS_RECEIVER_DEVICE_READY_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_DEVICE_READY_REG_IDX
/*
#define _HRT_CSS_RECEIVER_IRQ_STATUS_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_IRQ_STATUS_REG_IDX
 */
#define _HRT_CSS_RECEIVER_IRQ_ENABLE_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_IRQ_ENABLE_REG_IDX
#define _HRT_CSS_RECEIVER_FUNC_PROG_REG_IDX				\
	_HRT_CSS_RECEIVER_AHB_CSI2_FUNC_PROG_REG_IDX
#define _HRT_CSS_RECEIVER_INIT_COUNT_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_INIT_COUNT_REG_IDX
#define _HRT_CSS_RECEIVER_COMP_FORMAT_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_COMP_FORMAT_REG_IDX
#define _HRT_CSS_RECEIVER_COMP_PREDICT_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_COMP_PREDICT_REG_IDX
#define _HRT_CSS_RECEIVER_FS_TO_LS_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_FS_TO_LS_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_LS_TO_DATA_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_LS_TO_DATA_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_DATA_TO_LE_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_DATA_TO_LE_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_LE_TO_FE_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_LE_TO_FE_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_FE_TO_FS_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_FE_TO_FS_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_LE_TO_LS_DELAY_REG_IDX		\
	_HRT_CSS_RECEIVER_AHB_LE_TO_LS_DELAY_REG_IDX
#define _HRT_CSS_RECEIVER_TWO_PIXEL_EN_REG_IDX			\
	_HRT_CSS_RECEIVER_AHB_TWO_PIXEL_EN_REG_IDX


/*
#define _HRT_CSS_RECEIVER_IRQ_OVERRUN_BIT				\
	_HRT_CSS_RECEIVER_AHB_IRQ_OVERRUN_BIT
 */
#define _HRT_CSS_RECEIVER_IRQ_RESERVED_BIT				\
	_HRT_CSS_RECEIVER_AHB_IRQ_RESERVED_BIT
#define _HRT_CSS_RECEIVER_IRQ_SLEEP_MODE_ENTRY_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_SLEEP_MODE_ENTRY_BIT
#define _HRT_CSS_RECEIVER_IRQ_SLEEP_MODE_EXIT_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_SLEEP_MODE_EXIT_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_SOT_HS_BIT			\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_SOT_HS_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_SOT_SYNC_HS_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_SOT_SYNC_HS_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_CONTROL_BIT			\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_CONTROL_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_ECC_DOUBLE_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_ECC_DOUBLE_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_ECC_CORRECTED_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_ECC_CORRECTED_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_ECC_NO_CORRECTION_BIT	\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_ECC_NO_CORRECTION_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_CRC_BIT				\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_CRC_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_ID_BIT				\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_ID_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_FRAME_SYNC_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_FRAME_SYNC_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_FRAME_DATA_BIT		\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_FRAME_DATA_BIT
#define _HRT_CSS_RECEIVER_IRQ_DATA_TIMEOUT_BIT			\
	_HRT_CSS_RECEIVER_AHB_IRQ_DATA_TIMEOUT_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_ESCAPE_BIT			\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_ESCAPE_BIT
#define _HRT_CSS_RECEIVER_IRQ_ERR_LINE_SYNC_BIT			\
	_HRT_CSS_RECEIVER_AHB_IRQ_ERR_LINE_SYNC_BIT

#define _HRT_CSS_RECEIVER_FUNC_PROG_REG_IDX				\
	_HRT_CSS_RECEIVER_AHB_CSI2_FUNC_PROG_REG_IDX
#define	_HRT_CSS_RECEIVER_DATA_TIMEOUT_IDX				\
	_HRT_CSS_RECEIVER_AHB_CSI2_DATA_TIMEOUT_IDX
#define	_HRT_CSS_RECEIVER_DATA_TIMEOUT_BITS				\
	_HRT_CSS_RECEIVER_AHB_CSI2_DATA_TIMEOUT_BITS


typedef enum {
	MONO_4L_1L_0L = 0,
	MONO_3L_1L_0L = 0,
	MONO_2L_1L_0L = 0,
	MONO_1L_1L_0L = 0,
	N_RX_MODE
} rx_mode_t;

typedef enum {
	MIPI_PREDICTOR_NONE = 0,
	MIPI_PREDICTOR_TYPE1,
	MIPI_PREDICTOR_TYPE2,
	N_MIPI_PREDICTOR_TYPES
} mipi_predictor_t;

typedef enum {
	MIPI_COMPRESSOR_NONE = 0,
	MIPI_COMPRESSOR_10_6_10,
	MIPI_COMPRESSOR_10_7_10,
	MIPI_COMPRESSOR_10_8_10,
	MIPI_COMPRESSOR_12_6_12,
	MIPI_COMPRESSOR_12_7_12,
	MIPI_COMPRESSOR_12_8_12,
	N_MIPI_COMPRESSOR_METHODS
} mipi_compressor_t;

typedef enum {
	MIPI_FORMAT_RGB888 = 0,
	MIPI_FORMAT_RGB555,
	MIPI_FORMAT_RGB444,
	MIPI_FORMAT_RGB565,
	MIPI_FORMAT_RGB666,
	MIPI_FORMAT_RAW8,		/* 5 */
	MIPI_FORMAT_RAW10,
	MIPI_FORMAT_RAW6,
	MIPI_FORMAT_RAW7,
	MIPI_FORMAT_RAW12,
	MIPI_FORMAT_RAW14,		/* 10 */
	MIPI_FORMAT_YUV420_8,
	MIPI_FORMAT_YUV420_10,
	MIPI_FORMAT_YUV422_8,
	MIPI_FORMAT_YUV422_10,
	MIPI_FORMAT_CUSTOM0,	/* 15 */
	MIPI_FORMAT_YUV420_8_LEGACY,
	MIPI_FORMAT_EMBEDDED,
	MIPI_FORMAT_CUSTOM1,
	MIPI_FORMAT_CUSTOM2,
	MIPI_FORMAT_CUSTOM3,	/* 20 */
	MIPI_FORMAT_CUSTOM4,
	MIPI_FORMAT_CUSTOM5,
	MIPI_FORMAT_CUSTOM6,
	MIPI_FORMAT_CUSTOM7,
	MIPI_FORMAT_YUV420_8_SHIFT,	/* 25 */
	MIPI_FORMAT_YUV420_10_SHIFT,
	N_MIPI_FORMAT,
} mipi_format_t;

#define MIPI_FORMAT_RAW16		MIPI_FORMAT_EMBEDDED
#define MIPI_FORMAT_JPEG		MIPI_FORMAT_CUSTOM0
#define MIPI_FORMAT_BINARY_8	MIPI_FORMAT_CUSTOM0
#define N_MIPI_FORMAT_CUSTOM	8

/* The number of stores for compressed format types */
#define	N_MIPI_COMPRESSOR_CONTEXT	(N_MIPI_PORT_ID)

/*
 * Internal encoding
 *
typedef enum {
	MIPI_FORMAT_RAW16 = 17,
	MIPI_FORMAT_EMBEDDED,

	MIPI_FORMAT_YUV420_8 = 24,
	MIPI_FORMAT_YUV420_10,
	MIPI_FORMAT_YUV420_8_LEGACY,

	MIPI_FORMAT_YUV420_8_SHIFT = 28,
	MIPI_FORMAT_YUV420_10_SHIFT,
	MIPI_FORMAT_YUV422_8,
	MIPI_FORMAT_YUV422_10,
	MIPI_FORMAT_RGB555,
	MIPI_FORMAT_RGB444,
	MIPI_FORMAT_RGB565,
	MIPI_FORMAT_RGB666,
	MIPI_FORMAT_RGB888,

	MIPI_FORMAT_RAW8 = 40,
	MIPI_FORMAT_RAW10,
	MIPI_FORMAT_RAW6,
	MIPI_FORMAT_RAW7,
	MIPI_FORMAT_RAW12,
	MIPI_FORMAT_RAW14,

	MIPI_FORMAT_CUSTOM0 = 48,
	MIPI_FORMAT_CUSTOM1,
	MIPI_FORMAT_CUSTOM2,
	MIPI_FORMAT_CUSTOM3,
	MIPI_FORMAT_CUSTOM4,
	MIPI_FORMAT_CUSTOM5,
	MIPI_FORMAT_CUSTOM6,
	MIPI_FORMAT_CUSTOM7,
	N_MIPI_FORMAT = 28,
} mipi_format_t;
 */

typedef enum {
	RX_IRQ_INFO_BUFFER_OVERRUN   =
		1UL << _HRT_CSS_RECEIVER_IRQ_OVERRUN_BIT,
/*	RX_IRQ_INFO_RESERVED         =
		1UL << _HRT_CSS_RECEIVER_IRQ_RESERVED_BIT, */
	RX_IRQ_INFO_ENTER_SLEEP_MODE =
		1UL << _HRT_CSS_RECEIVER_IRQ_SLEEP_MODE_ENTRY_BIT,
	RX_IRQ_INFO_EXIT_SLEEP_MODE  =
		1UL << _HRT_CSS_RECEIVER_IRQ_SLEEP_MODE_EXIT_BIT,
	RX_IRQ_INFO_ECC_CORRECTED    =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_ECC_CORRECTED_BIT,
	RX_IRQ_INFO_ERR_SOT          =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_SOT_HS_BIT,
	RX_IRQ_INFO_ERR_SOT_SYNC     =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_SOT_SYNC_HS_BIT,
	RX_IRQ_INFO_ERR_CONTROL      =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_CONTROL_BIT,
	RX_IRQ_INFO_ERR_ECC_DOUBLE   =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_ECC_DOUBLE_BIT,
/*	RX_IRQ_INFO_NO_ERR           =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_ECC_NO_CORRECTION_BIT, */
	RX_IRQ_INFO_ERR_CRC          =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_CRC_BIT,
	RX_IRQ_INFO_ERR_UNKNOWN_ID   =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_ID_BIT,
	RX_IRQ_INFO_ERR_FRAME_SYNC   =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_FRAME_SYNC_BIT,
	RX_IRQ_INFO_ERR_FRAME_DATA   =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_FRAME_DATA_BIT,
	RX_IRQ_INFO_ERR_DATA_TIMEOUT =
		1UL << _HRT_CSS_RECEIVER_IRQ_DATA_TIMEOUT_BIT,
	RX_IRQ_INFO_ERR_UNKNOWN_ESC  =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_ESCAPE_BIT,
	RX_IRQ_INFO_ERR_LINE_SYNC    =
		1UL << _HRT_CSS_RECEIVER_IRQ_ERR_LINE_SYNC_BIT,
}  rx_irq_info_t;


typedef struct rx_cfg_s		rx_cfg_t;

struct rx_cfg_s {
	mipi_port_ID_t		port;
	unsigned int		num_lanes;
	unsigned int		timeout;
	unsigned int		comp_bpp;
	unsigned int		uncomp_bpp;
	mipi_predictor_t	comp;
	bool                is_two_ppc;
};

static const hrt_address MIPI_PORT_OFFSET[N_MIPI_PORT_ID] = {
	0x00000100UL,
	0x00000200UL};

static const mipi_lane_cfg_t MIPI_PORT_MAXLANES[N_MIPI_PORT_ID] = {
	MIPI_4LANE_CFG,
	MIPI_1LANE_CFG};

static const hrt_address SUB_SYSTEM_OFFSET[N_SUB_SYSTEM_ID] = {
	0x00000000UL};

struct input_system_state_s {
	int	ch_id_fmt_type;
};

struct mipi_port_state_s {
	int	device_ready;
	int	irq_status;
	int	irq_enable;
	int	func_prog;
	int	init_count;
	int	comp_format;
	int	comp_predict;
	int	fs_to_ls_delay;
	int	ls_to_data_delay;
	int	data_to_le_delay;
	int	le_to_fe_delay;
	int	fe_to_fs_delay;
	int	le_to_fs_delay;
	int	is_two_ppc;
};

struct receiver_state_s {
	struct mipi_port_state_s	mipi_port_state[N_MIPI_PORT_ID];
};

#endif /* __INPUT_SYSTEM_LOCAL_H_INCLUDED__ */
