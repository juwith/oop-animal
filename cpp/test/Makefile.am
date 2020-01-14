bin_PROGRAMS = animal_actionpp

animal_actionpp_SOURCES = \
	animal_action.cpp

animal_actionpp_CXXFLAGS = \
	-I$(top_srcdir)/src/mammal \
	-I$(top_srcdir)/src/amphibia \
	-I$(top_srcdir)/src/base

animal_actionpp_LDADD = \
	$(top_builddir)/src/mammal/libanimalmammalpp.la \
	$(top_builddir)/src/amphibia/libanimalamphibiapp.la
