SIMISA@@@@@@@@@@JINX0s1t______

shape (
	shape_header ( 00000000 00000000 )
	volumes ( 2
		vol_sphere (
			vector ( 0.238985 0.88 0.00500003 ) 0.976218
		)
		vol_sphere (
			vector ( 0.238985 0.88 0.00500003 ) 0.929731
		)
	)
	shader_names ( 1
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 8
		point ( 0.3 0 0 )
		point ( 0.3 1.76 0 )
		point ( -0.3 1.76 0 )
		point ( -0.3 0 0 )
		point ( 0.274826 -0.342592 0 )
		point ( 0.646775 0.163755 0 )
		point ( 0.281819 0.432057 0 )
		point ( -0.0901297 -0.0742894 0 )
	)
	uv_points ( 8
		uv_point ( 0.66 0.99 )
		uv_point ( 0.66 0.05 )
		uv_point ( 1 0.05 )
		uv_point ( 1 0.99 )
		uv_point ( 0 0.38 )
		uv_point ( 0 0 )
		uv_point ( 0.334 0 )
		uv_point ( 0.334 0.38 )
	)
	normals ( 2
		vector ( 0 0 -1 )
		vector ( 0 0 -1 )
	)
	sort_vectors ( 1
		vector ( 0.238985 0.88 0.00500003 )
	)
	colours ( 0 )
	matrices ( 2
		matrix SIGNAL ( 1 0 0 0 1 0 0 0 1 0 0 0 )
		matrix HEAD1 ( 1 0 0 0 1 0 0 0 1 0.131195 1.295 0.01 )
	)
	images ( 1
		image ( cpsps1ce.ace )
	)
	textures ( 1
		texture ( 0 0 0 ff000000 )
	)
	light_materials ( 0 )
	light_model_cfgs ( 1
		light_model_cfg ( 00000000
			uv_ops ( 1
				uv_op_copy ( 1 0 )
			)
		)
	)
	vtx_states ( 2
		vtx_state ( 00000000 0 -5 0 00000002 )
		vtx_state ( 00000000 1 -5 0 00000002 )
	)
	prim_states ( 2
		prim_state TransNorm11 ( 00000000 0
			tex_idxs ( 1 0 ) 0 0 1 0 1
		)
		prim_state TransNorm11 ( 00000000 0
			tex_idxs ( 1 0 ) 0 1 1 0 1
		)
	)
	lod_controls ( 1
		lod_control (
			distance_levels_header ( 0 )
			distance_levels ( 1
				distance_level (
					distance_level_header (
						dlevel_selection ( 2000 )
						hierarchy ( 2 -1 0 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 4 2 0 12 0 0 2 0 0 0
									geometry_nodes ( 2
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 2 6 )
										)
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 2 6 )
										)
									)
									geometry_node_map ( 2 0 1 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 8
								vertex ( 00000000 0 1 ff969696 ff808080
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 1 ff969696 ff808080
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 2 1 ff969696 ff808080
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 3 1 ff969696 ff808080
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 4 1 ff969696 ff808080
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 5 1 ff969696 ff808080
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 6 1 ff969696 ff808080
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 7 1 ff969696 ff808080
									vertex_uvs ( 1 7 )
								)
							)
							vertex_sets ( 2
								vertex_set ( 0 0 4 )
								vertex_set ( 1 4 4 )
							)
							primitives ( 4
								prim_state_idx ( 0 )
								indexed_trilist (
									vertex_idxs ( 6 0 2 1 2 0 3 )
									normal_idxs ( 2 1 3 1 3 )
									flags ( 2 00000000 00000000 )
								)
								prim_state_idx ( 1 )
								indexed_trilist (
									vertex_idxs ( 6 4 6 5 6 4 7 )
									normal_idxs ( 2 0 3 0 3 )
									flags ( 2 00000000 00000000 )
								)
							)
						)
					)
				)
			)
		)
	)
	animations ( 1
		animation ( 1 30
			anim_nodes ( 2
				anim_node SIGNAL (
					controllers ( 0 )
				)
				anim_node HEAD1 (
					controllers ( 2
						tcb_rot ( 3
							tcb_key ( 0 0 0 0 1 0 0 0 0 0 )
							tcb_key ( 1 0 0 -0.311506 0.950244 0 0 0 0 0 )
							tcb_key ( 2 0 0 0 1 0 0 0 0 0 )
						)
						linear_pos ( 2
							linear_key ( 0 0.131195 1.295 0.01 )
							linear_key ( 1 0.131195 1.295 0.01 )
						)
					)
				)
			)
		)
	)
)
