# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wengzhao/Desktop/fondlefish/sql-parser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wengzhao/Desktop/fondlefish/sql-parser/build

# Include any dependencies generated for this target.
include ast/CMakeFiles/libast.dir/depend.make

# Include the progress variables for this target.
include ast/CMakeFiles/libast.dir/progress.make

# Include the compile flags for this target's objects.
include ast/CMakeFiles/libast.dir/flags.make

ast/CMakeFiles/libast.dir/ast_base.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_base.cc.o: ../ast/ast_base.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ast/CMakeFiles/libast.dir/ast_base.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_base.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_base.cc

ast/CMakeFiles/libast.dir/ast_base.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_base.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_base.cc > CMakeFiles/libast.dir/ast_base.cc.i

ast/CMakeFiles/libast.dir/ast_base.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_base.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_base.cc -o CMakeFiles/libast.dir/ast_base.cc.s

ast/CMakeFiles/libast.dir/ast_column_list.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_column_list.cc.o: ../ast/ast_column_list.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object ast/CMakeFiles/libast.dir/ast_column_list.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_column_list.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_column_list.cc

ast/CMakeFiles/libast.dir/ast_column_list.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_column_list.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_column_list.cc > CMakeFiles/libast.dir/ast_column_list.cc.i

ast/CMakeFiles/libast.dir/ast_column_list.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_column_list.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_column_list.cc -o CMakeFiles/libast.dir/ast_column_list.cc.s

ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.o: ../ast/ast_create_database_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_create_database_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_database_stmt.cc

ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_create_database_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_database_stmt.cc > CMakeFiles/libast.dir/ast_create_database_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_create_database_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_database_stmt.cc -o CMakeFiles/libast.dir/ast_create_database_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.o: ../ast/ast_create_table_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_create_table_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_table_stmt.cc

ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_create_table_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_table_stmt.cc > CMakeFiles/libast.dir/ast_create_table_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_create_table_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_create_table_stmt.cc -o CMakeFiles/libast.dir/ast_create_table_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.o: ../ast/ast_delete_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_delete_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_delete_stmt.cc

ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_delete_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_delete_stmt.cc > CMakeFiles/libast.dir/ast_delete_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_delete_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_delete_stmt.cc -o CMakeFiles/libast.dir/ast_delete_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_expr.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_expr.cc.o: ../ast/ast_expr.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object ast/CMakeFiles/libast.dir/ast_expr.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_expr.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_expr.cc

ast/CMakeFiles/libast.dir/ast_expr.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_expr.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_expr.cc > CMakeFiles/libast.dir/ast_expr.cc.i

ast/CMakeFiles/libast.dir/ast_expr.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_expr.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_expr.cc -o CMakeFiles/libast.dir/ast_expr.cc.s

ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o: ../ast/ast_insert_asgn_list.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_asgn_list.cc

ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_insert_asgn_list.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_asgn_list.cc > CMakeFiles/libast.dir/ast_insert_asgn_list.cc.i

ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_insert_asgn_list.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_asgn_list.cc -o CMakeFiles/libast.dir/ast_insert_asgn_list.cc.s

ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.o: ../ast/ast_insert_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_insert_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_stmt.cc

ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_insert_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_stmt.cc > CMakeFiles/libast.dir/ast_insert_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_insert_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_stmt.cc -o CMakeFiles/libast.dir/ast_insert_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.o: ../ast/ast_insert_val_list.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_insert_val_list.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_val_list.cc

ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_insert_val_list.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_val_list.cc > CMakeFiles/libast.dir/ast_insert_val_list.cc.i

ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_insert_val_list.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_insert_val_list.cc -o CMakeFiles/libast.dir/ast_insert_val_list.cc.s

ast/CMakeFiles/libast.dir/ast_opts.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_opts.cc.o: ../ast/ast_opts.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object ast/CMakeFiles/libast.dir/ast_opts.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_opts.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_opts.cc

ast/CMakeFiles/libast.dir/ast_opts.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_opts.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_opts.cc > CMakeFiles/libast.dir/ast_opts.cc.i

ast/CMakeFiles/libast.dir/ast_opts.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_opts.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_opts.cc -o CMakeFiles/libast.dir/ast_opts.cc.s

ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.o: ../ast/ast_replace_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_replace_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_replace_stmt.cc

ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_replace_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_replace_stmt.cc > CMakeFiles/libast.dir/ast_replace_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_replace_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_replace_stmt.cc -o CMakeFiles/libast.dir/ast_replace_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_select_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_select_stmt.cc.o: ../ast/ast_select_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object ast/CMakeFiles/libast.dir/ast_select_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_select_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_select_stmt.cc

ast/CMakeFiles/libast.dir/ast_select_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_select_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_select_stmt.cc > CMakeFiles/libast.dir/ast_select_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_select_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_select_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_select_stmt.cc -o CMakeFiles/libast.dir/ast_select_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_set_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_set_stmt.cc.o: ../ast/ast_set_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object ast/CMakeFiles/libast.dir/ast_set_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_set_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_set_stmt.cc

ast/CMakeFiles/libast.dir/ast_set_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_set_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_set_stmt.cc > CMakeFiles/libast.dir/ast_set_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_set_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_set_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_set_stmt.cc -o CMakeFiles/libast.dir/ast_set_stmt.cc.s

ast/CMakeFiles/libast.dir/ast_stmt_list.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_stmt_list.cc.o: ../ast/ast_stmt_list.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object ast/CMakeFiles/libast.dir/ast_stmt_list.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_stmt_list.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_stmt_list.cc

ast/CMakeFiles/libast.dir/ast_stmt_list.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_stmt_list.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_stmt_list.cc > CMakeFiles/libast.dir/ast_stmt_list.cc.i

ast/CMakeFiles/libast.dir/ast_stmt_list.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_stmt_list.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_stmt_list.cc -o CMakeFiles/libast.dir/ast_stmt_list.cc.s

ast/CMakeFiles/libast.dir/ast_table_reference.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_table_reference.cc.o: ../ast/ast_table_reference.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object ast/CMakeFiles/libast.dir/ast_table_reference.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_table_reference.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_table_reference.cc

ast/CMakeFiles/libast.dir/ast_table_reference.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_table_reference.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_table_reference.cc > CMakeFiles/libast.dir/ast_table_reference.cc.i

ast/CMakeFiles/libast.dir/ast_table_reference.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_table_reference.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_table_reference.cc -o CMakeFiles/libast.dir/ast_table_reference.cc.s

ast/CMakeFiles/libast.dir/ast_update_stmt.cc.o: ast/CMakeFiles/libast.dir/flags.make
ast/CMakeFiles/libast.dir/ast_update_stmt.cc.o: ../ast/ast_update_stmt.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object ast/CMakeFiles/libast.dir/ast_update_stmt.cc.o"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libast.dir/ast_update_stmt.cc.o -c /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_update_stmt.cc

ast/CMakeFiles/libast.dir/ast_update_stmt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libast.dir/ast_update_stmt.cc.i"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_update_stmt.cc > CMakeFiles/libast.dir/ast_update_stmt.cc.i

ast/CMakeFiles/libast.dir/ast_update_stmt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libast.dir/ast_update_stmt.cc.s"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wengzhao/Desktop/fondlefish/sql-parser/ast/ast_update_stmt.cc -o CMakeFiles/libast.dir/ast_update_stmt.cc.s

# Object files for target libast
libast_OBJECTS = \
"CMakeFiles/libast.dir/ast_base.cc.o" \
"CMakeFiles/libast.dir/ast_column_list.cc.o" \
"CMakeFiles/libast.dir/ast_create_database_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_create_table_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_delete_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_expr.cc.o" \
"CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o" \
"CMakeFiles/libast.dir/ast_insert_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_insert_val_list.cc.o" \
"CMakeFiles/libast.dir/ast_opts.cc.o" \
"CMakeFiles/libast.dir/ast_replace_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_select_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_set_stmt.cc.o" \
"CMakeFiles/libast.dir/ast_stmt_list.cc.o" \
"CMakeFiles/libast.dir/ast_table_reference.cc.o" \
"CMakeFiles/libast.dir/ast_update_stmt.cc.o"

# External object files for target libast
libast_EXTERNAL_OBJECTS =

ast/libast.a: ast/CMakeFiles/libast.dir/ast_base.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_column_list.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_create_database_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_create_table_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_delete_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_expr.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_insert_asgn_list.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_insert_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_insert_val_list.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_opts.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_replace_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_select_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_set_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_stmt_list.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_table_reference.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/ast_update_stmt.cc.o
ast/libast.a: ast/CMakeFiles/libast.dir/build.make
ast/libast.a: ast/CMakeFiles/libast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wengzhao/Desktop/fondlefish/sql-parser/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX static library libast.a"
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && $(CMAKE_COMMAND) -P CMakeFiles/libast.dir/cmake_clean_target.cmake
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libast.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ast/CMakeFiles/libast.dir/build: ast/libast.a

.PHONY : ast/CMakeFiles/libast.dir/build

ast/CMakeFiles/libast.dir/clean:
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast && $(CMAKE_COMMAND) -P CMakeFiles/libast.dir/cmake_clean.cmake
.PHONY : ast/CMakeFiles/libast.dir/clean

ast/CMakeFiles/libast.dir/depend:
	cd /Users/wengzhao/Desktop/fondlefish/sql-parser/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wengzhao/Desktop/fondlefish/sql-parser /Users/wengzhao/Desktop/fondlefish/sql-parser/ast /Users/wengzhao/Desktop/fondlefish/sql-parser/build /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast /Users/wengzhao/Desktop/fondlefish/sql-parser/build/ast/CMakeFiles/libast.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ast/CMakeFiles/libast.dir/depend

