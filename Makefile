COMPILER=gcc

.PHONY: help
help:
	@grep -h -E '^[[:space:]]*[A-Za-z0-9_.-]+:.*?## .*$$' $(MAKEFILE_LIST) \
		| sed -E 's/^[[:space:]]*//' \
		| awk 'BEGIN {FS = ":.*?## "}; {printf "\033[1;34m%-15s\033[m \xE2\x80\x94 %s\n", $$1, $$2}'

.PHONY: init
init: ## initialize the project
	@mkdir bin

.PHONY: clean
clean: ## remove binaries
	@rm -rf bin/
	@make init

.PHONY: compile
compile: ## compile the program
	@$(COMPILER) -c src/map/map.c -Iinclude/ -o bin/map.o
	@$(COMPILER) -c example/simple_example.c -Iinclude/ -o example/simple_example.o
	@$(COMPILER) bin/map.o example/simple_example.o -o bin/exe.o

.PHONY: run
run: compile ## run the programme
	@echo
	@echo "main.c returns:"
	@./bin/exe.o
	@echo
	@echo "\nDone!"
