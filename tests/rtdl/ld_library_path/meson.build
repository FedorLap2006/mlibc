# Remove the RPATH and set the LD_LIBRARY_PATH environment variable
# instead when running tests to make sure the library can be found
# in a directory specified by the user at runtime

test_rpath = '$ORIGIN/'

test_ld_path = meson.build_root() / 'tests' / 'rtdl' / test_name
test_env += ['LD_LIBRARY_PATH=' + test_ld_path]
test_native_env += ['LD_LIBRARY_PATH=' + test_ld_path]

libfoo = shared_library('foo', 'libfoo.c',
	link_with: libc, include_directories: libc_include_dirs,
	link_args: test_additional_link_args,
)

libfoo_native = shared_library('native-foo', 'libfoo.c',
	link_args: ['-ldl'] + test_additional_link_args,
	native: true
)
