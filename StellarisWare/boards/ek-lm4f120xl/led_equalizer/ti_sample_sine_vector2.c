#include "arm_math.h"

const q15_t ti_sample_sine_vector[2048] = {
0x0800,	0x0827,	0x084f,	0x0876,	0x089d,	0x08c3,	0x08e8,	0x090d,	
0x0930,	0x0952,	0x0973,	0x0993,	0x09b1,	0x09cd,	0x09e8,	0x0a00,	
0x0a17,	0x0a2c,	0x0a3e,	0x0a4f,	0x0a5d,	0x0a68,	0x0a72,	0x0a79,	
0x0a7d,	0x0a7f,	0x0a7f,	0x0a7c,	0x0a77,	0x0a6f,	0x0a65,	0x0a59,	
0x0a4a,	0x0a39,	0x0a26,	0x0a10,	0x09f9,	0x09e0,	0x09c4,	0x09a7,	
0x0989,	0x0969,	0x0948,	0x0925,	0x0901,	0x08dc,	0x08b7,	0x0890,	
0x0869,	0x0842,	0x081b,	0x07f3,	0x07cb,	0x07a4,	0x077d,	0x0756,	
0x0730,	0x070b,	0x06e7,	0x06c4,	0x06a2,	0x0682,	0x0662,	0x0645,	
0x0629,	0x060f,	0x05f7,	0x05e1,	0x05cd,	0x05bb,	0x05ac,	0x059e,	
0x0593,	0x058b,	0x0585,	0x0581,	0x0580,	0x0581,	0x0584,	0x058a,	
0x0593,	0x059e,	0x05ab,	0x05ba,	0x05cc,	0x05e0,	0x05f6,	0x060e,	
0x0628,	0x0644,	0x0661,	0x0680,	0x06a1,	0x06c2,	0x06e5,	0x070a,	
0x072f,	0x0754,	0x077b,	0x07a2,	0x07c9,	0x07f1,	0x0819,	0x0840,	
0x0868,	0x088f,	0x08b5,	0x08db,	0x08ff,	0x0923,	0x0946,	0x0967,	
0x0988,	0x09a6,	0x09c3,	0x09de,	0x09f8,	0x0a0f,	0x0a25,	0x0a38,	
0x0a49,	0x0a58,	0x0a64,	0x0a6f,	0x0a77,	0x0a7c,	0x0a7f,	0x0a7f,	
0x0a7d,	0x0a79,	0x0a72,	0x0a69,	0x0a5d,	0x0a4f,	0x0a3f,	0x0a2d,	
0x0a18,	0x0a02,	0x09e9,	0x09ce,	0x09b2,	0x0994,	0x0975,	0x0954,	
0x0932,	0x090e,	0x08ea,	0x08c4,	0x089e,	0x0878,	0x0850,	0x0829,	
0x0801,	0x07da,	0x07b2,	0x078b,	0x0764,	0x073e,	0x0719,	0x06f4,	
0x06d1,	0x06ae,	0x068d,	0x066e,	0x064f,	0x0633,	0x0618,	0x0600,	
0x05e9,	0x05d4,	0x05c1,	0x05b1,	0x05a3,	0x0597,	0x058e,	0x0586,	
0x0582,	0x0580,	0x0580,	0x0583,	0x0588,	0x058f,	0x0599,	0x05a6,	
0x05b5,	0x05c5,	0x05d9,	0x05ee,	0x0605,	0x061e,	0x0639,	0x0656,	
0x0675,	0x0695,	0x06b6,	0x06d9,	0x06fc,	0x0721,	0x0747,	0x076d,	
0x0794,	0x07bb,	0x07e3,	0x080a,	0x0832,	0x0859,	0x0880,	0x08a7,	
0x08cd,	0x08f2,	0x0916,	0x093a,	0x095b,	0x097c,	0x099b,	0x09b9,	
0x09d5,	0x09ef,	0x0a07,	0x0a1d,	0x0a31,	0x0a43,	0x0a53,	0x0a60,	
0x0a6b,	0x0a74,	0x0a7a,	0x0a7e,	0x0a7f,	0x0a7e,	0x0a7b,	0x0a75,	
0x0a6d,	0x0a62,	0x0a55,	0x0a45,	0x0a34,	0x0a20,	0x0a0a,	0x09f2,	
0x09d8,	0x09bd,	0x099f,	0x0980,	0x0960,	0x093e,	0x091b,	0x08f7,	
0x08d2,	0x08ac,	0x0886,	0x085f,	0x0837,	0x0810,	0x07e8,	0x07c0,	
0x0799,	0x0772,	0x074c,	0x0726,	0x0701,	0x06dd,	0x06bb,	0x0699,	
0x0679,	0x065a,	0x063d,	0x0622,	0x0608,	0x05f1,	0x05db,	0x05c8,	
0x05b7,	0x05a8,	0x059b,	0x0591,	0x0589,	0x0583,	0x0580,	0x0580,	
0x0581,	0x0586,	0x058c,	0x0596,	0x05a1,	0x05af,	0x05bf,	0x05d1,	
0x05e6,	0x05fc,	0x0615,	0x062f,	0x064c,	0x0669,	0x0689,	0x06aa,	
0x06cc,	0x06ef,	0x0714,	0x0739,	0x075f,	0x0786,	0x07ad,	0x07d4,	
0x07fc,	0x0824,	0x084b,	0x0872,	0x0899,	0x08bf,	0x08e5,	0x0909,	
0x092d,	0x094f,	0x0970,	0x0990,	0x09ae,	0x09cb,	0x09e5,	0x09fe,	
0x0a15,	0x0a2a,	0x0a3d,	0x0a4d,	0x0a5c,	0x0a68,	0x0a71,	0x0a78,	
0x0a7d,	0x0a7f,	0x0a7f,	0x0a7c,	0x0a77,	0x0a70,	0x0a66,	0x0a5a,	
0x0a4b,	0x0a3a,	0x0a27,	0x0a12,	0x09fb,	0x09e2,	0x09c7,	0x09aa,	
0x098c,	0x096c,	0x094b,	0x0928,	0x0904,	0x08e0,	0x08ba,	0x0894,	
0x086d,	0x0846,	0x081e,	0x07f6,	0x07cf,	0x07a7,	0x0780,	0x075a,	
0x0734,	0x070f,	0x06ea,	0x06c7,	0x06a5,	0x0684,	0x0665,	0x0648,	
0x062c,	0x0611,	0x05f9,	0x05e3,	0x05cf,	0x05bd,	0x05ad,	0x059f,	
0x0594,	0x058b,	0x0585,	0x0581,	0x0580,	0x0580,	0x0584,	0x058a,	
0x0592,	0x059d,	0x05aa,	0x05b9,	0x05ca,	0x05de,	0x05f4,	0x060c,	
0x0626,	0x0641,	0x065e,	0x067d,	0x069e,	0x06bf,	0x06e2,	0x0706,	
0x072b,	0x0751,	0x0778,	0x079f,	0x07c6,	0x07ee,	0x0815,	0x083d,	
0x0864,	0x088b,	0x08b1,	0x08d7,	0x08fc,	0x0920,	0x0943,	0x0964,	
0x0985,	0x09a3,	0x09c1,	0x09dc,	0x09f5,	0x0a0d,	0x0a23,	0x0a36,	
0x0a48,	0x0a57,	0x0a63,	0x0a6e,	0x0a76,	0x0a7c,	0x0a7f,	0x0a7f,	
0x0a7e,	0x0a7a,	0x0a73,	0x0a6a,	0x0a5e,	0x0a51,	0x0a41,	0x0a2e,	
0x0a1a,	0x0a04,	0x09eb,	0x09d1,	0x09b5,	0x0997,	0x0978,	0x0957,	
0x0935,	0x0911,	0x08ed,	0x08c8,	0x08a2,	0x087b,	0x0854,	0x082d,	
0x0805,	0x07dd,	0x07b6,	0x078e,	0x0768,	0x0741,	0x071c,	0x06f7,	
0x06d4,	0x06b1,	0x0690,	0x0670,	0x0652,	0x0636,	0x061b,	0x0602,	
0x05eb,	0x05d6,	0x05c3,	0x05b2,	0x05a4,	0x0598,	0x058e,	0x0587,	
0x0582,	0x0580,	0x0580,	0x0582,	0x0587,	0x058f,	0x0598,	0x05a5,	
0x05b3,	0x05c4,	0x05d7,	0x05ec,	0x0603,	0x061c,	0x0637,	0x0654,	
0x0672,	0x0692,	0x06b3,	0x06d5,	0x06f9,	0x071e,	0x0743,	0x0769,	
0x0790,	0x07b8,	0x07df,	0x0807,	0x082e,	0x0856,	0x087d,	0x08a4,	
0x08ca,	0x08ef,	0x0913,	0x0936,	0x0958,	0x0979,	0x0998,	0x09b6,	
0x09d2,	0x09ec,	0x0a05,	0x0a1b,	0x0a2f,	0x0a42,	0x0a51,	0x0a5f,	
0x0a6a,	0x0a73,	0x0a7a,	0x0a7e,	0x0a7f,	0x0a7f,	0x0a7b,	0x0a76,	
0x0a6d,	0x0a63,	0x0a56,	0x0a47,	0x0a35,	0x0a22,	0x0a0c,	0x09f4,	
0x09db,	0x09bf,	0x09a2,	0x0983,	0x0963,	0x0941,	0x091e,	0x08fa,	
0x08d5,	0x08b0,	0x0889,	0x0862,	0x083b,	0x0813,	0x07ec,	0x07c4,	
0x079d,	0x0776,	0x074f,	0x0729,	0x0705,	0x06e1,	0x06be,	0x069c,	
0x067c,	0x065d,	0x0640,	0x0624,	0x060b,	0x05f3,	0x05dd,	0x05ca,	
0x05b8,	0x05a9,	0x059c,	0x0592,	0x0589,	0x0584,	0x0580,	0x0580,	
0x0581,	0x0585,	0x058c,	0x0595,	0x05a0,	0x05ae,	0x05be,	0x05d0,	
0x05e4,	0x05fa,	0x0613,	0x062d,	0x0649,	0x0667,	0x0686,	0x06a7,	
0x06c9,	0x06ec,	0x0710,	0x0735,	0x075c,	0x0782,	0x07a9,	0x07d1,	
0x07f8,	0x0820,	0x0848,	0x086f,	0x0896,	0x08bc,	0x08e1,	0x0906,	
0x092a,	0x094c,	0x096d,	0x098d,	0x09ac,	0x09c8,	0x09e3,	0x09fc,	
0x0a13,	0x0a28,	0x0a3b,	0x0a4c,	0x0a5a,	0x0a67,	0x0a70,	0x0a78,	
0x0a7d,	0x0a7f,	0x0a7f,	0x0a7d,	0x0a78,	0x0a71,	0x0a67,	0x0a5b,	
0x0a4d,	0x0a3c,	0x0a29,	0x0a14,	0x09fd,	0x09e4,	0x09c9,	0x09ad,	
0x098f,	0x096f,	0x094e,	0x092b,	0x0908,	0x08e3,	0x08bd,	0x0897,	
0x0870,	0x0849,	0x0822,	0x07fa,	0x07d2,	0x07ab,	0x0784,	0x075d,	
0x0737,	0x0712,	0x06ed,	0x06ca,	0x06a8,	0x0687,	0x0668,	0x064a,	
0x062e,	0x0614,	0x05fb,	0x05e5,	0x05d0,	0x05be,	0x05ae,	0x05a0,	
0x0595,	0x058c,	0x0585,	0x0581,	0x0580,	0x0580,	0x0583,	0x0589,	
0x0591,	0x059c,	0x05a8,	0x05b7,	0x05c9,	0x05dc,	0x05f2,	0x060a,	
0x0623,	0x063f,	0x065c,	0x067a,	0x069b,	0x06bc,	0x06df,	0x0703,	
0x0728,	0x074e,	0x0774,	0x079b,	0x07c2,	0x07ea,	0x0812,	0x0839,	
0x0861,	0x0888,	0x08ae,	0x08d4,	0x08f9,	0x091d,	0x0940,	0x0961,	
0x0982,	0x09a1,	0x09be,	0x09da,	0x09f3,	0x0a0b,	0x0a21,	0x0a35,	
0x0a46,	0x0a55,	0x0a62,	0x0a6d,	0x0a75,	0x0a7b,	0x0a7f,	0x0a7f,	
0x0a7e,	0x0a7a,	0x0a74,	0x0a6b,	0x0a60,	0x0a52,	0x0a42,	0x0a30,	
0x0a1c,	0x0a06,	0x09ee,	0x09d3,	0x09b7,	0x099a,	0x097b,	0x095a,	
0x0938,	0x0915,	0x08f0,	0x08cb,	0x08a5,	0x087f,	0x0858,	0x0830,	
0x0809,	0x07e1,	0x07b9,	0x0792,	0x076b,	0x0745,	0x071f,	0x06fb,	
0x06d7,	0x06b4,	0x0693,	0x0673,	0x0655,	0x0638,	0x061d,	0x0604,	
0x05ed,	0x05d8,	0x05c5,	0x05b4,	0x05a5,	0x0599,	0x058f,	0x0588,	
0x0583,	0x0580,	0x0580,	0x0582,	0x0587,	0x058e,	0x0597,	0x05a3,	
0x05b2,	0x05c2,	0x05d5,	0x05ea,	0x0601,	0x061a,	0x0634,	0x0651,	
0x066f,	0x068f,	0x06b0,	0x06d2,	0x06f6,	0x071a,	0x0740,	0x0766,	
0x078d,	0x07b4,	0x07db,	0x0803,	0x082b,	0x0852,	0x0879,	0x08a0,	
0x08c6,	0x08eb,	0x0910,	0x0933,	0x0955,	0x0976,	0x0996,	0x09b3,	
0x09d0,	0x09ea,	0x0a03,	0x0a19,	0x0a2e,	0x0a40,	0x0a50,	0x0a5e,	
0x0a69,	0x0a73,	0x0a79,	0x0a7e,	0x0a7f,	0x0a7f,	0x0a7c,	0x0a76,	
0x0a6e,	0x0a64,	0x0a57,	0x0a48,	0x0a37,	0x0a24,	0x0a0e,	0x09f7,	
0x09dd,	0x09c2,	0x09a5,	0x0986,	0x0966,	0x0945,	0x0922,	0x08fe,	
0x08d9,	0x08b3,	0x088d,	0x0866,	0x083f,	0x0817,	0x07ef,	0x07c8,	
0x07a0,	0x0779,	0x0753,	0x072d,	0x0708,	0x06e4,	0x06c1,	0x069f,	
0x067f,	0x0660,	0x0642,	0x0627,	0x060d,	0x05f5,	0x05df,	0x05cb,	
0x05ba,	0x05aa,	0x059d,	0x0592,	0x058a,	0x0584,	0x0581,	0x0580,	
0x0581,	0x0585,	0x058b,	0x0594,	0x059f,	0x05ac,	0x05bc,	0x05ce,	
0x05e2,	0x05f8,	0x0610,	0x062a,	0x0646,	0x0664,	0x0683,	0x06a3,	
0x06c5,	0x06e8,	0x070d,	0x0732,	0x0758,	0x077e,	0x07a5,	0x07cd,	
0x07f4,	0x081c,	0x0844,	0x086b,	0x0892,	0x08b8,	0x08de,	0x0902,	
0x0926,	0x0949,	0x096a,	0x098a,	0x09a9,	0x09c5,	0x09e1,	0x09fa,	
0x0a11,	0x0a26,	0x0a39,	0x0a4a,	0x0a59,	0x0a65,	0x0a6f,	0x0a77,	
0x0a7c,	0x0a7f,	0x0a7f,	0x0a7d,	0x0a79,	0x0a72,	0x0a68,	0x0a5c,	
0x0a4e,	0x0a3e,	0x0a2b,	0x0a16,	0x0a00,	0x09e7,	0x09cc,	0x09b0,	
0x0992,	0x0972,	0x0951,	0x092f,	0x090b,	0x08e7,	0x08c1,	0x089b,	
0x0874,	0x084d,	0x0826,	0x07fe,	0x07d6,	0x07af,	0x0788,	0x0761,	
0x073b,	0x0716,	0x06f1,	0x06ce,	0x06ab,	0x068b,	0x066b,	0x064d,	
0x0631,	0x0616,	0x05fe,	0x05e7,	0x05d2,	0x05c0,	0x05b0,	0x05a2,	
0x0596,	0x058d,	0x0586,	0x0582,	0x0580,	0x0580,	0x0583,	0x0588,	
0x0590,	0x059a,	0x05a7,	0x05b6,	0x05c7,	0x05da,	0x05f0,	0x0607,	
0x0620,	0x063c,	0x0659,	0x0677,	0x0697,	0x06b9,	0x06db,	0x06ff,	
0x0724,	0x074a,	0x0770,	0x0797,	0x07be,	0x07e6,	0x080e,	0x0835,	
0x085d,	0x0884,	0x08aa,	0x08d0,	0x08f5,	0x0919,	0x093c,	0x095e,	
0x097f,	0x099e,	0x09bb,	0x09d7,	0x09f1,	0x0a09,	0x0a1f,	0x0a33,	
0x0a44,	0x0a54,	0x0a61,	0x0a6c,	0x0a75,	0x0a7b,	0x0a7e,	0x0a7f,	
0x0a7e,	0x0a7b,	0x0a74,	0x0a6c,	0x0a61,	0x0a54,	0x0a44,	0x0a32,	
0x0a1e,	0x0a08,	0x09f0,	0x09d6,	0x09ba,	0x099d,	0x097e,	0x095d,	
0x093b,	0x0918,	0x08f4,	0x08cf,	0x08a9,	0x0883,	0x085c,	0x0834,	
0x080d,	0x07e5,	0x07bd,	0x0796,	0x076f,	0x0749,	0x0723,	0x06fe,	
0x06db,	0x06b8,	0x0696,	0x0676,	0x0658,	0x063b,	0x0620,	0x0607,	
0x05ef,	0x05da,	0x05c7,	0x05b5,	0x05a7,	0x059a,	0x0590,	0x0588,	
0x0583,	0x0580,	0x0580,	0x0582,	0x0586,	0x058d,	0x0596,	0x05a2,	
0x05b0,	0x05c0,	0x05d3,	0x05e8,	0x05fe,	0x0617,	0x0631,	0x064e,	
0x066c,	0x068b,	0x06ac,	0x06ce,	0x06f2,	0x0716,	0x073c,	0x0762,	
0x0789,	0x07b0,	0x07d7,	0x07ff,	0x0827,	0x084e,	0x0875,	0x089c,	
0x08c2,	0x08e8,	0x090c,	0x0930,	0x0952,	0x0973,	0x0992,	0x09b0,	
0x09cd,	0x09e7,	0x0a00,	0x0a17,	0x0a2c,	0x0a3e,	0x0a4e,	0x0a5d,	
0x0a68,	0x0a72,	0x0a79,	0x0a7d,	0x0a7f,	0x0a7f,	0x0a7c,	0x0a77,	
0x0a6f,	0x0a65,	0x0a59,	0x0a4a,	0x0a39,	0x0a26,	0x0a11,	0x09f9,	
0x09e0,	0x09c5,	0x09a8,	0x0989,	0x0969,	0x0948,	0x0925,	0x0902,	
0x08dd,	0x08b7,	0x0891,	0x086a,	0x0843,	0x081b,	0x07f4,	0x07cc,	
0x07a4,	0x077d,	0x0757,	0x0731,	0x070c,	0x06e8,	0x06c5,	0x06a3,	
0x0682,	0x0663,	0x0645,	0x062a,	0x0610,	0x05f7,	0x05e1,	0x05cd,	
0x05bb,	0x05ac,	0x059e,	0x0593,	0x058b,	0x0585,	0x0581,	0x0580,	
0x0581,	0x0584,	0x058a,	0x0593,	0x059e,	0x05ab,	0x05ba,	0x05cc,	
0x05e0,	0x05f6,	0x060e,	0x0627,	0x0643,	0x0661,	0x067f,	0x06a0,	
0x06c2,	0x06e5,	0x0709,	0x072e,	0x0754,	0x077a,	0x07a1,	0x07c9,	
0x07f0,	0x0818,	0x0840,	0x0867,	0x088e,	0x08b4,	0x08da,	0x08ff,	
0x0923,	0x0945,	0x0967,	0x0987,	0x09a6,	0x09c3,	0x09de,	0x09f7,	
0x0a0f,	0x0a24,	0x0a38,	0x0a49,	0x0a58,	0x0a64,	0x0a6f,	0x0a76,	
0x0a7c,	0x0a7f,	0x0a7f,	0x0a7d,	0x0a79,	0x0a72,	0x0a69,	0x0a5e,	
0x0a50,	0x0a40,	0x0a2d,	0x0a19,	0x0a02,	0x09e9,	0x09cf,	0x09b3,	
0x0995,	0x0975,	0x0955,	0x0932,	0x090f,	0x08ea,	0x08c5,	0x089f,	
0x0878,	0x0851,	0x082a,	0x0802,	0x07da,	0x07b3,	0x078c,	0x0765,	
0x073f,	0x0719,	0x06f5,	0x06d1,	0x06af,	0x068e,	0x066e,	0x0650,	
0x0634,	0x0619,	0x0600,	0x05e9,	0x05d4,	0x05c2,	0x05b1,	0x05a3,	
0x0597,	0x058e,	0x0587,	0x0582,	0x0580,	0x0580,	0x0583,	0x0588,	
0x058f,	0x0599,	0x05a6,	0x05b4,	0x05c5,	0x05d8,	0x05ed,	0x0605,	
0x061e,	0x0639,	0x0656,	0x0674,	0x0694,	0x06b5,	0x06d8,	0x06fb,	
0x0720,	0x0746,	0x076c,	0x0793,	0x07ba,	0x07e2,	0x0809,	0x0831,	
0x0858,	0x0880,	0x08a6,	0x08cc,	0x08f1,	0x0916,	0x0939,	0x095b,	
0x097b,	0x099b,	0x09b8,	0x09d4,	0x09ee,	0x0a06,	0x0a1d,	0x0a31,	
0x0a43,	0x0a52,	0x0a60,	0x0a6b,	0x0a74,	0x0a7a,	0x0a7e,	0x0a7f,	
0x0a7e,	0x0a7b,	0x0a75,	0x0a6d,	0x0a62,	0x0a55,	0x0a46,	0x0a34,	
0x0a20,	0x0a0b,	0x09f3,	0x09d9,	0x09bd,	0x09a0,	0x0981,	0x0961,	
0x093f,	0x091c,	0x08f8,	0x08d3,	0x08ad,	0x0887,	0x0860,	0x0838,	
0x0811,	0x07e9,	0x07c1,	0x079a,	0x0773,	0x074d,	0x0727,	0x0702,	
0x06de,	0x06bb,	0x069a,	0x067a,	0x065b,	0x063e,	0x0623,	0x0609,	
0x05f1,	0x05dc,	0x05c8,	0x05b7,	0x05a8,	0x059b,	0x0591,	0x0589,	
0x0583,	0x0580,	0x0580,	0x0581,	0x0586,	0x058c,	0x0595,	0x05a1,	
0x05af,	0x05bf,	0x05d1,	0x05e5,	0x05fc,	0x0614,	0x062f,	0x064b,	
0x0669,	0x0688,	0x06a9,	0x06cb,	0x06ee,	0x0713,	0x0738,	0x075e,	
0x0785,	0x07ac,	0x07d3,	0x07fb,	0x0823,	0x084a,	0x0871,	0x0898,	
0x08be,	0x08e4,	0x0908,	0x092c,	0x094e,	0x0970,	0x098f,	0x09ae,	
0x09ca,	0x09e5,	0x09fe,	0x0a15,	0x0a2a,	0x0a3c,	0x0a4d,	0x0a5b,	
0x0a67,	0x0a71,	0x0a78,	0x0a7d,	0x0a7f,	0x0a7f,	0x0a7d,	0x0a78,	
0x0a70,	0x0a66,	0x0a5a,	0x0a4c,	0x0a3b,	0x0a28,	0x0a13,	0x09fc,	
0x09e2,	0x09c8,	0x09ab,	0x098d,	0x096d,	0x094b,	0x0929,	0x0905,	
0x08e0,	0x08bb,	0x0895,	0x086e,	0x0847,	0x081f,	0x07f7,	0x07d0,	
0x07a8,	0x0781,	0x075b,	0x0735,	0x070f,	0x06eb,	0x06c8,	0x06a6,	
0x0685,	0x0666,	0x0648,	0x062c,	0x0612,	0x05fa,	0x05e3,	0x05cf,	
0x05bd,	0x05ad,	0x05a0,	0x0594,	0x058c,	0x0585,	0x0581,	0x0580,	
0x0580,	0x0584,	0x058a,	0x0592,	0x059c,	0x05a9,	0x05b9,	0x05ca,	
0x05de,	0x05f4,	0x060b,	0x0625,	0x0640,	0x065e,	0x067d,	0x069d,	
0x06bf,	0x06e1,	0x0705,	0x072a,	0x0750,	0x0777,	0x079e,	0x07c5,	
0x07ed,	0x0814,	0x083c,	0x0863,	0x088a,	0x08b1,	0x08d6,	0x08fb,	
0x091f,	0x0942,	0x0964,	0x0984,	0x09a3,	0x09c0,	0x09db,	0x09f5,	
0x0a0d,	0x0a22,	0x0a36,	0x0a47,	0x0a56,	0x0a63,	0x0a6e,	0x0a76,	
0x0a7b,	0x0a7f,	0x0a7f,	0x0a7e,	0x0a7a,	0x0a73,	0x0a6a,	0x0a5f,	
0x0a51,	0x0a41,	0x0a2f,	0x0a1b,	0x0a04,	0x09ec,	0x09d1,	0x09b5,	
0x0998,	0x0978,	0x0957,	0x0935,	0x0912,	0x08ee,	0x08c9,	0x08a2,	
0x087c,	0x0855,	0x082d,	0x0806,	0x07de,	0x07b6,	0x078f,	0x0768,	
0x0742,	0x071d,	0x06f8,	0x06d4,	0x06b2,	0x0691,	0x0671,	0x0653,	
0x0636,	0x061b,	0x0602,	0x05eb,	0x05d6,	0x05c3,	0x05b3,	0x05a4,	
0x0598,	0x058e,	0x0587,	0x0582,	0x0580,	0x0580,	0x0582,	0x0587,	
0x058f,	0x0598,	0x05a4,	0x05b3,	0x05c4,	0x05d6,	0x05eb,	0x0603,	
0x061c,	0x0636,	0x0653,	0x0671,	0x0691,	0x06b2,	0x06d5,	0x06f8,	
0x071d,	0x0743,	0x0769,	0x0790,	0x07b7,	0x07de,	0x0806,	0x082e,	
0x0855,	0x087c,	0x08a3,	0x08c9,	0x08ee,	0x0913,	0x0936,	0x0958,	
0x0979,	0x0998,	0x09b6,	0x09d2,	0x09ec,	0x0a04,	0x0a1b,	0x0a2f,	
0x0a41,	0x0a51,	0x0a5f,	0x0a6a,	0x0a73,	0x0a7a,	0x0a7e,	0x0a7f,	
0x0a7f,	0x0a7b,	0x0a76,	0x0a6e,	0x0a63,	0x0a56,	0x0a47,	0x0a36,	
0x0a22,	0x0a0c,	0x09f5,	0x09db,	0x09c0,	0x09a2,	0x0984,	0x0963,	
0x0942,	0x091f,	0x08fb,	0x08d6,	0x08b0,	0x088a,	0x0863,	0x083b,	
0x0814,	0x07ec,	0x07c5,	0x079d,	0x0776,	0x0750,	0x072a,	0x0705,	
0x06e1,	0x06be,	0x069c,	0x067c,	0x065d,	0x0640,	0x0625,	0x060b,	
0x05f3,	0x05dd,	0x05ca,	0x05b8,	0x05a9,	0x059c,	0x0592,	0x0589,	
0x0584,	0x0580,	0x0580,	0x0581,	0x0585,	0x058c,	0x0595,	0x05a0,	
0x05ad,	0x05bd,	0x05cf,	0x05e4,	0x05fa,	0x0612,	0x062d,	0x0649,	
0x0666,	0x0686,	0x06a6,	0x06c8,	0x06ec,	0x0710,	0x0735,	0x075b,	
0x0782,	0x07a9,	0x07d0,	0x07f8,	0x0820,	0x0847,	0x086e,	0x0895,	
0x08bb,	0x08e1,	0x0906,	0x0929,	0x094c,	0x096d,	0x098d,	0x09ab,	
0x09c8,	0x09e3,	0x09fc,	0x0a13,	0x0a28,	0x0a3b,	0x0a4c,	0x0a5a,	
0x0a66,	0x0a70,	0x0a78,	0x0a7d,	0x0a7f,	0x0a7f,	0x0a7d,	0x0a78,	
0x0a71,	0x0a67,	0x0a5b,	0x0a4d,	0x0a3c,	0x0a29,	0x0a14,	0x09fd,	
0x09e4,	0x09ca,	0x09ad,	0x098f,	0x096f,	0x094e,	0x092c,	0x0908,	
0x08e3,	0x08be,	0x0898,	0x0871,	0x084a,	0x0822,	0x07fa,	0x07d3,	
0x07ab,	0x0784,	0x075e,	0x0737,	0x0712,	0x06ee,	0x06cb,	0x06a8,	
0x0688,	0x0668,	0x064a,	0x062e,	0x0614,	0x05fc,	0x05e5,	0x05d1,	
0x05be,	0x05ae,	0x05a1,	0x0595,	0x058c,	0x0586,	0x0581,	0x0580,	
0x0580,	0x0583,	0x0589,	0x0591,	0x059b,	0x05a8,	0x05b7,	0x05c9,	
0x05dc,	0x05f2,	0x0609,	0x0623,	0x063e,	0x065b,	0x067a,	0x069a,	
0x06bc,	0x06df,	0x0703,	0x0728,	0x074d,	0x0774,	0x079b,	0x07c2,	
0x07ea,	0x0811,	0x0839,	0x0860,	0x0887,	0x08ae,	0x08d4,	0x08f9,	
0x091d,	0x0940,	0x0961,	0x0982,	0x09a1,	0x09be,	0x09d9,	0x09f3,	
0x0a0b,	0x0a21,	0x0a34,	0x0a46,	0x0a55,	0x0a62,	0x0a6d,	0x0a75,	
0x0a7b,	0x0a7f,	0x0a7f,	0x0a7e,	0x0a7a,	0x0a74,	0x0a6b,	0x0a60,	
0x0a52,	0x0a42,	0x0a30,	0x0a1c,	0x0a06,	0x09ee,	0x09d4,	0x09b8,	
0x099a,	0x097b,	0x095a,	0x0938,	0x0915,	0x08f1,	0x08cb,	0x08a5,	
0x087f,	0x0858,	0x0830,	0x0809,	0x07e1,	0x07b9,	0x0792,	0x076b,	
0x0745,	0x071f,	0x06fb,	0x06d7,	0x06b4,	0x0693,	0x0673,	0x0655,	
0x0638,	0x061d,	0x0604,	0x05ed,	0x05d8,	0x05c5,	0x05b4,	0x05a5,	
0x0599,	0x058f,	0x0588,	0x0583,	0x0580,	0x0580,	0x0582,	0x0587,	
0x058e,	0x0597,	0x05a3,	0x05b2,	0x05c2,	0x05d5,	0x05ea,	0x0601,	
0x061a,	0x0634,	0x0651,	0x066f,	0x068f,	0x06b0,	0x06d2,	0x06f6,	
0x071a,	0x0740,	0x0766,	0x078d,	0x07b4,	0x07db,	0x0803,	0x082b,	
0x0852,	0x0879,	0x08a0,	0x08c6,	0x08eb,	0x0910,	0x0933,	0x0955,	
0x0976,	0x0996,	0x09b3,	0x09d0,	0x09ea,	0x0a03,	0x0a19,	0x0a2e,	
0x0a40,	0x0a50,	0x0a5e,	0x0a69,	0x0a73,	0x0a79,	0x0a7e,	0x0a7f,	
0x0a7f,	0x0a7c,	0x0a76,	0x0a6e,	0x0a64,	0x0a57,	0x0a48,	0x0a37,	
0x0a24,	0x0a0e,	0x09f7,	0x09dd,	0x09c2,	0x09a5,	0x0986,	0x0966,	
0x0944,	0x0922,	0x08fe,	0x08d9,	0x08b3,	0x088d,	0x0866,	0x083e,	
0x0817,	0x07ef,	0x07c8,	0x07a0,	0x0779,	0x0753,	0x072d,	0x0708,	
0x06e4,	0x06c1,	0x069f,	0x067f,	0x0660,	0x0642,	0x0627,	0x060d,	
0x05f5,	0x05df,	0x05cb,	0x05ba,	0x05aa,	0x059d,	0x0592,	0x058a,	
0x0584,	0x0581,	0x0580,	0x0581,	0x0585,	0x058b,	0x0594,	0x059f,	
0x05ac,	0x05bc,	0x05ce,	0x05e2,	0x05f8,	0x0610,	0x062a,	0x0646,	
0x0664,	0x0683,	0x06a4,	0x06c6,	0x06e9,	0x070d,	0x0732,	0x0758,	
0x077f,	0x07a6,	0x07cd,	0x07f5,	0x081c,	0x0844,	0x086b,	0x0892,	
0x08b8,	0x08de,	0x0903,	0x0927,	0x0949,	0x096b,	0x098a,	0x09a9,	
0x09c6,	0x09e1,	0x09fa,	0x0a11,	0x0a26,	0x0a3a,	0x0a4b,	0x0a59
};


