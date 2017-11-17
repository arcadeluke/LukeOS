
void printf(char* str){
  unsigned short* VidmeoMemory = (unsigneed short(*)0xb8000;
                                     
  for(int i = 0; str[i] != '\0'; ++i)
      VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}


extern "C" void kernelMain(void* mutliboot_structure, unsigned int magicnumber){
  printf("Hello world! --- http://AlgorithmMan.de")
    
  while(1):
}
