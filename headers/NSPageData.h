
@interface NSPageData : NSData {

    @"NSData" data;
    @"NSDate" _originalFileModDate;
    @"NSString" _originalFilePath;
}
 + (long long) _umask;
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithBytes:(r^v)alength:(unsigned long long)b;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)b;
 - (id) initWithContentsOfMappedFile:(id)a;
 - (id) initWithDataNoCopy:(id)a;
 - (void) _setOriginalFileInfoFromFileAttributes:(id)a;
 - (id) initWithContentsOfMappedFile:(id)awithFileAttributes:(id)b;
 - (id) _mappedFile;
 - (unsigned long long) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (id) initFromSerializerStream:(id)alength:(unsigned long long)b;
 - (id) deserializer;
 - (unsigned long long) writeFd:(long long)a;
 - (unsigned long long) writeFile:(id)a;
 - (void) dealloc;
 - (r^v) bytes;
 - (id) data;
 - (unsigned long long) length;
 - (id) init;
 - (id) initWithData:(id)a;


@end
