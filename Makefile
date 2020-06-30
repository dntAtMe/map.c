main:
	$(MAKE) -C src/ 
	mv src/main.out main

clean:
	rm main
