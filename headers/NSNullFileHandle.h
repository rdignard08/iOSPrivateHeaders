
@interface NSNullFileHandle : NSFileHandle {

}

 - (id) availableData;
 - (id) readDataToEndOfFile;
 - (id) readDataOfLength:(Q)a;
 - (Q) offsetInFile;
 - (Q) seekToEndOfFile;
 - (void) truncateFileAtOffset:(Q)a;
 - (void) synchronizeFile;
 - (@?) writeabilityHandler;
 - (void) setWriteabilityHandler:(@?)a;
 - (@?) readabilityHandler;
 - (void) setReadabilityHandler:(@?)a;
 - (i) fileDescriptor;
 - (void) closeFile;
 - (void) seekToFileOffset:(Q)a;
 - (void) writeData:(id)a;


@end
