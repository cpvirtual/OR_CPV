SIMISA@@@@@@@@@@JINX0s1t______

shape (
	shape_header ( 00000000 00000000 )
	volumes ( 2
		vol_sphere (
			vector ( -0.238823 0.88 0.00500001 ) 0.976218
		)
		vol_sphere (
			vector ( -0.238823 0.88 0.00500001 ) 0.929731
		)
	)
	shader_names ( 1
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 8
		point ( -0.3 1.76 0 )
		point ( -0.3 0 0 )
		point ( 0.3 1.76 0 )
		point ( 0.3 0 0 )
		point ( -0.424309 0 0.514874 )
		point ( -0.424309 0 -0.113404 )
		point ( 0.0286577 0 0.515047 )
		point ( 0.0286577 0 -0.11323 )
	)
	uv_points ( 8
		uv_point ( 0.66 0.05 )
		uv_point ( 0.66 0.99 )
		uv_point ( 1 0.05 )
		uv_point ( 1 0.99 )
		uv_point ( 0 0 )
		uv_point ( 0 0.38 )
		uv_point ( 0.334 0 )
		uv_point ( 0.334 0.38 )
	)
	normals ( 4
		vector ( 0 1 0 )
		vector ( 0 0.584714 0 )
		vector ( 0 0 -1 )
		vector ( 0 0 -0.322674 )
	)
	sort_vectors ( 1
		vector ( -0.238823 0.88 0.00500001 )
	)
	colours ( 0 )
	matrices ( 2
		matrix SIGNAL ( 1 0 0 0 1 0 0 0 1 0 0 0 )
		matrix HEAD1 ( 0.805928 0.592013 0 0 0 -1 -0.592013 0.805928 0 -0.130872 1.295 0.01 )
	)
	images ( 1
		image ( cpsps1ce.ace )
	)
	textures ( 1
		texture ( 0 0 -3 ff000000 )
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
						dlevel_selection ( 1500 )
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
								vertex ( 00000000 0 2 ff969696 ff808080
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 2 ff969696 ff808080
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 2 2 ff969696 ff808080
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 3 2 ff969696 ff808080
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 4 0 ff969696 ff808080
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 5 0 ff969696 ff808080
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 6 0 ff969696 ff808080
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 7 0 ff969696 ff808080
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
									vertex_idxs ( 6 0 2 1 3 1 2 )
									normal_idxs ( 2 3 3 3 3 )
									flags ( 2 00000000 00000000 )
								)
								prim_state_idx ( 1 )
								indexed_trilist (
									vertex_idxs ( 6 4 6 5 7 5 6 )
									normal_idxs ( 2 1 3 1 3 )
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
							tcb_key ( 0 0.707107 0 0 0.707107 0 0 0 0 0 )
							tcb_key ( 1 0.671924 0.220268 -0.220268 0.671924 0 0 0 0 0 )
							tcb_key ( 2 0.707107 0 0 0.707107 0 0 0 0 0 )
						)
						linear_pos ( 2
							linear_key ( 0 -0.130872 1.295 0.01 )
							linear_key ( 1 -0.130872 1.295 0.01 )
						)
					)
				)
			)
		)
	)
)
