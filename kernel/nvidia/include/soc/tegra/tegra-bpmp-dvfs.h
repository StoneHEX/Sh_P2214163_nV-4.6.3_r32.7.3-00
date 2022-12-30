/*
 * Copyright (c) 2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SOC_TEGRA_BPMP_DVFS_H
#define _SOC_TEGRA_BPMP_DVFS_H

#include <linux/of.h>

unsigned long tegra_bpmp_dvfs_get_fmax_at_vmin(int clk_id);
int tegra_bpmp_dvfs_get_clk_id(struct device_node *np, const char *name);

#endif