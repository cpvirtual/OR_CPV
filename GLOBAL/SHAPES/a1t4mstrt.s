SIMISA@@@@@@@@@@JINX0s1t______

shape (
	shape_header ( 00000000 )
	volumes ( 4
		vol_sphere (
			vector ( 0 0.2625 2.0 ) 2.34802
		)
		vol_sphere (
			vector ( 0 0.2625 2.0 ) 2.236208
		)
		vol_sphere (
			vector ( 0 0.2625 2.0 ) 2.236208
		)
		vol_sphere (
			vector ( 0 0.2 2.0 ) 2.236068
		)
	)
	shader_names ( 2
		named_shader ( TexDiff )
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 20
		point ( 2.5 0.2 0 )
		point ( 2.5 0.2 3.999999 )
		point ( -2.5 0.2 0 )
		point ( -2.5 0.2 3.999999 )
		point ( 0.8675 0.2 4 )
		point ( 0.8675 0.325 4 )
		point ( 0.8675 0.325 0 )
		point ( 0.7175 0.325 4 )
		point ( 0.7175 0.2 4 )
		point ( 0.7175 0.2 0 )
		point ( 0.8675 0.2 0 )
		point ( 0.7175 0.325 0 )
		point ( -0.7175 0.2 4 )
		point ( -0.7175 0.325 4 )
		point ( -0.7175 0.325 0 )
		point ( -0.8675 0.325 4 )
		point ( -0.8675 0.2 4 )
		point ( -0.8675 0.2 0 )
		point ( -0.7175 0.2 0 )
		point ( -0.8675 0.325 0 )
	)
	uv_points ( 16
		uv_point ( -0.138916 1.34543 )
		uv_point ( -0.138915 0.69502 )
		uv_point ( 0.862105 1.34543 )
		uv_point ( 0.862106 0.69502 )
		uv_point ( 0.529986 0.0768389 )
		uv_point ( 0.529986 0.00461835 )
		uv_point ( -0.139362 0.00461835 )
		uv_point ( -0.139362 0.0768389 )
		uv_point ( 0.976793 0.231349 )
		uv_point ( 0.976793 0.134136 )
		uv_point ( 0.0232067 0.134134 )
		uv_point ( 0.0232067 0.231347 )
		uv_point ( 0.398787 0.225743 )
		uv_point ( 0.398787 0.128537 )
		uv_point ( -0.00606728 0.128535 )
		uv_point ( -0.00606728 0.225742 )
	)
	normals ( 4
		vector ( -1 0 0 )
		vector ( 1 0 0 )
		vector ( 0 1 0 )
		vector ( 0 0.447214 0 )
	)
	sort_vectors ( 3
		vector ( 0 0.2625 2.0 )
		vector ( 0 0.2625 2.0 )
		vector ( 0 0.2 2.0 )
	)
	colours ( 0 )
	matrices ( 1
		matrix TRACK1_10M ( 1 0 0 0 1 0 0 0 1 0 0 0 )
	)
	images ( 2
		image ( ACleanTrack1.ace )
		image ( ACleanTrack2.ace )
	)
	textures ( 2
		texture ( 1 0 -1 ff000000 )
		texture ( 0 0 -1 ff000000 )
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
		vtx_state ( 00000000 0 -6 0 00000002 )
	)
	prim_states ( 4
		prim_state Track ( 00000000 0
			tex_idxs ( 1 0 ) 0 0 0 0 1
		)
		prim_state RailTops ( 00000000 0
			tex_idxs ( 1 0 ) 0 1 0 0 1
		)
		prim_state Base ( 00000000 0
			tex_idxs ( 1 1 ) 0 0 0 0 3
		)
		prim_state Base ( 00000000 1
			tex_idxs ( 1 1 ) 0 0 0 0 3
		)
	)
	lod_controls ( 1
		lod_control (
			distance_levels_header ( 0 )
			distance_levels ( 3
				distance_level (
					distance_level_header (
						dlevel_selection ( 700 )
						hierarchy ( 1 -1 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000000 -1 -1 000001d2 000001c4
								geometry_info ( 14 2 0 42 0 0 3 0 0 0
									geometry_nodes ( 1
										geometry_node ( 2 0 0 0 0
											cullable_prims ( 3 14 42 )
										)
									)
									geometry_node_map ( 1 0 )
								)
								subobject_shaders ( 2 0 1 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 28
								vertex ( 00000000 4 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 5 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 6 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 7 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 8 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 9 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 7 )
								)
								vertex ( 00000000 10 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 7 )
								)
								vertex ( 00000000 11 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 12 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 13 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 14 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 15 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 5 )
								)
								vertex ( 00000000 16 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 17 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 7 )
								)
								vertex ( 00000000 18 1 ffc3c3c3 ff000000
									vertex_uvs ( 1 7 )
								)
								vertex ( 00000000 19 0 ffc3c3c3 ff000000
									vertex_uvs ( 1 6 )
								)
								vertex ( 00000000 0 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 2 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 3 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 5 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 8 )
								)
								vertex ( 00000000 7 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 9 )
								)
								vertex ( 00000000 11 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 10 )
								)
								vertex ( 00000000 6 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 11 )
								)
								vertex ( 00000000 13 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 12 )
								)
								vertex ( 00000000 15 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 13 )
								)
								vertex ( 00000000 19 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 14 )
								)
								vertex ( 00000000 14 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 15 )
								)
							)
							vertex_sets ( 2
								vertex_set ( 0 0 20 )
								vertex_set ( 1 20 8 )
							)
							primitives ( 6
								prim_state_idx ( 0 )
								indexed_trilist (
									vertex_idxs ( 24 0 2 1 3 5 4 2 0 6 5 3 7 8 10 9 11 13 12 10 8 14 13 11 15 )
									normal_idxs ( 8 1 3 0 3 1 3 0 3 1 3 0 3 1 3 0 3 )
									flags ( 8 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 )
								)
								prim_state_idx ( 1 )
								indexed_trilist (
									vertex_idxs ( 12 20 22 21 22 20 23 24 26 25 26 24 27 )
									normal_idxs ( 4 2 3 2 3 2 3 2 3 )
									flags ( 4 00000000 00000000 00000000 00000000 )
								)
								prim_state_idx ( 3 )
								indexed_trilist (
									vertex_idxs ( 6 16 18 17 19 17 18 )
									normal_idxs ( 2 3 3 3 3 )
									flags ( 2 00000000 00000000 )
								)
							)
						)
					)
				)
				distance_level (
					distance_level_header (
						dlevel_selection ( 1200 )
						hierarchy ( 1 -1 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 6 1 0 18 0 0 2 0 0 0
									geometry_nodes ( 1
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 2 6 18 )
										)
									)
									geometry_node_map ( 1 0 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 12
								vertex ( 00000000 5 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 8 )
								)
								vertex ( 00000000 7 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 9 )
								)
								vertex ( 00000000 11 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 10 )
								)
								vertex ( 00000000 6 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 11 )
								)
								vertex ( 00000000 13 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 12 )
								)
								vertex ( 00000000 15 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 13 )
								)
								vertex ( 00000000 19 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 14 )
								)
								vertex ( 00000000 14 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 15 )
								)
								vertex ( 00000000 0 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 2 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 3 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 3 )
								)
							)
							vertex_sets ( 1
								vertex_set ( 0 0 12 )
							)
							primitives ( 4
								prim_state_idx ( 0 )
								indexed_trilist (
									vertex_idxs ( 12 0 2 1 2 0 3 4 6 5 6 4 7 )
									normal_idxs ( 4 2 3 2 3 2 3 2 3 )
									flags ( 4 00000000 00000000 00000000 00000000 )
								)
								prim_state_idx ( 2 )
								indexed_trilist (
									vertex_idxs ( 6 8 10 9 11 9 10 )
									normal_idxs ( 2 3 3 3 3 )
									flags ( 2 00000000 00000000 )
								)
							)
						)
					)
				)
				distance_level (
					distance_level_header (
						dlevel_selection ( 2000 )
						hierarchy ( 1 -1 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 2 1 0 6 0 0 1 0 0 0
									geometry_nodes ( 1
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 2 6 )
										)
									)
									geometry_node_map ( 1 0 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 4
								vertex ( 00000000 0 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 2 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 3 2 ffc3c3c3 ff000000
									vertex_uvs ( 1 3 )
								)
							)
							vertex_sets ( 1
								vertex_set ( 0 0 4 )
							)
							primitives ( 2
								prim_state_idx ( 2 )
								indexed_trilist (
									vertex_idxs ( 6 0 2 1 3 1 2 )
									normal_idxs ( 2 3 3 3 3 )
									flags ( 2 00000000 00000000 )
								)
							)
						)
					)
				)
			)
		)
	)
)
