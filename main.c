#include <stdio.h>
#include <stdlib.h>

// use run-length encoding (RLE) or wavelet transforms to de-correlate data to increase compression ratio
// maybe keep both Huffman algorithm and LZMA algorithm within compressor to provide high and low level of data compression
// Speed of compression can varry too
// Provide 2 options for compression (fast / normal) and save flag bit and use that flag during decompression

int main(int argc, char* argv[]){

    if(argc < 3){
        if(argv[2] == "-help"){
            //build this help function and provide help list of commands for compressor
            //compression / decompression commands with both high and low speed option (not now)
            //explain command - explain how this app works
            
            return 0;
        }
        else{
            printf("Incorrect command!\nTry ./compressor -help");
        }
    }

    // read file

    // calculate frequency
    
    // Build tree

    // encoding

    // saving

    // char fileName[];
    // FILE pfile = fopen(fileName, 'r');
    return 0;
}