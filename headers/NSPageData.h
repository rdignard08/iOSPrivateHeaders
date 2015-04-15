
@interface NSPageData : NSData {

    NSData* data;
    NSDate* _originalFileModDate;
    NSString* _originalFilePath;
}
 + (long long) _umask;
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a ;
 - (id) initWithBytes:(r^v)a length:(unsigned long long)b ;
 - (id) initWithBytesNoCopy:(^v)a length:(unsigned long long)b ;
 - (id) initWithContentsOfMappedFile:(id)a ;
 - (id) initWithDataNoCopy:(id)a ;
 - (void) _setOriginalFileInfoFromFileAttributes:(id)a ;
 - (id) initWithContentsOfMappedFile:(id)a withFileAttributes:(id)b ;
 - (id) _mappedFile;
 - (unsigned long long) writePath:(id)a docInfo:(id)b errorHandler:(id)c remapContents:(BOOL)d hardLinkPath:(id)e ;
 - (id) initFromSerializerStream:(id)a length:(unsigned long long)b ;
 - (id) deserializer;
 - (unsigned long long) writeFd:(long long)a ;
 - (unsigned long long) writeFile:(id)a ;
 - (void) dealloc;
 - (r^v) bytes;
 - (id) data;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithData:(id)a ;


@end
