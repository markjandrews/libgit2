	cl_git_mkfile("treebuilder/test.txt", "test\n");
	/*
	 * Information about index entry should match test file
	 */
	{
		struct stat st;
		cl_must_pass(p_lstat("treebuilder/test.txt", &st));
		cl_assert(entry->file_size == st.st_size);
		cl_assert(entry->uid == st.st_uid);
		cl_assert(entry->gid == st.st_gid);
	}
