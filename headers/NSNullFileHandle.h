
@interface NSNullFileHandle : NSFileHandle {

}

 - (id) availableData;
 - (id) readDataToEndOfFile;
 - (id) readDataOfLength:(unsigned long long)a;
 - (unsigned long long) offsetInFile;
 - (unsigned long long) seekToEndOfFile;
 - (void) truncateFileAtOffset:(unsigned long long)a;
 - (void) synchronizeFile;
 - (@?) writeabilityHandler;
 - (void) setWriteabilityHandler:(@?)a;
 - (@?) readabilityHandler;
 - (void) setReadabilityHandler:(@?)a;
 - (int) fileDescriptor;
 - (void) closeFile;
 - (void) seekToFileOffset:(unsigned long long)a;
 - (void) writeData:(id)a;


@end
