CURR_DIR = $(shell pwd)

all:
	@echo "Buliding..."
	@for dir in examples/*/ ; do \
		cd $(CURR_DIR)/$$dir; \
		make all; \
    done

clean:
	@echo "Cleaning"
	@for dir in examples/*/ ; do \
		cd $(CURR_DIR)/$$dir; \
		make clean; \
    done
