bin_PROGRAMS = animal_action

animal_action_SOURCES = \
	animal_action.c

animal_action_CFLAGS = \
	-I$(top_srcdir)/src/mammal \
	-I$(top_srcdir)/src/amphibia \
	-I$(top_srcdir)/src/base

animal_action_LDADD = \
	$(top_builddir)/src/mammal/libanimalmammal.la \
	$(top_builddir)/src/amphibia/libanimalamphibia.la
