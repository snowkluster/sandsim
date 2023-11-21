all:
	+$(MAKE) -C src
run:
	.//build/app.exe
tps:
	.//build/app.exe -tps=150