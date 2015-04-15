
@interface NSPageData : NSData {

    @"NSData" data;
    @"NSDate" _originalFileModDate;
    @"NSString" _originalFilePath;
}
 + (q) _umask;
 + (void) initialize;

 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithBytes:(r^v)alength:(Q)b;
 - (id) initWithBytesNoCopy:(^v)alength:(Q)b;
 - (id) initWithContentsOfMappedFile:(id)a;
 - (id) initWithDataNoCopy:(id)a;
 - (void) _setOriginalFileInfoFromFileAttributes:(id)a;
 - (id) initWithContentsOfMappedFile:(id)awithFileAttributes:(id)b;
 - (id) _mappedFile;
 - (Q) writePath:(id)adocInfo:(id)berrorHandler:(id)cremapContents:(BOOL)dhardLinkPath:(id)e;
 - (id) initFromSerializerStream:(id)alength:(Q)b;
 - (id) deserializer;
 - (Q) writeFd:(q)a;
 - (Q) writeFile:(id)a;
 - (void) dealloc;
 - (r^v) bytes;
 - (id) data;
 - (Q) length;
 - (id) init;
 - (id) initWithData:(id)a;


@end
