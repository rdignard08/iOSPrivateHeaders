
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

}
@property (atomic, assign, readonly) NSNumber* length;
@property (atomic, assign, readonly) NSNumber* bytes;
 + (id) mappedDataWithContentsOfTemporaryFile:(id)aerror:(^@)b;
 + (id) MCDataWithHexString:(id)a;
 + (id) MCDataWithCFData:(^{__CFData=})a;
 + (id) dataWithBytesNoCopy:(^v)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 + (BOOL) supportsSecureCoding;
 + (id) dataWithContentsOfURL:(id)a;
 + (id) dataWithContentsOfMappedFile:(id)a;
 + (id) dataWithData:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) data;
 + (id) dataWithBytes:(r^v)alength:(unsigned long long)b;
 + (id) dataWithBytesNoCopy:(^v)alength:(unsigned long long)b;
 + (id) dataWithContentsOfFile:(id)a;
 + (id) dataWithContentsOfURL:(id)aoptions:(unsigned long long)berror:(^@)c;
 + (id) dataWithContentsOfFile:(id)aoptions:(unsigned long long)berror:(^@)c;

 - (id) decompressedGzipData;
 - (id) decompressedGzipDataUsingTemporaryFile;
 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(int)b;
 - (id) MCHexString;
 - (id) MCBase64String;
 - (id) MCInitWithBase64String:(id)a;
 - (id) MCSHA1Hash;
 - (id) _CUTDecompressData;
 - (id) _CUTStringFromBaseData;
 - (id) _CUTOptionallyDecompressData;
 - (id) _CUTCopyGzippedData;
 - (BOOL) _web_isCaseInsensitiveEqualToCString:(r*)a;
 - (id) _webkit_parseRFC822HeaderFields;
 - (BOOL) _web_startsWithBlankLine;
 - (long long) _web_locationAfterFirstBlankLine;
 - (id) _webkit_guessedMIMETypeForXML;
 - (id) _webkit_guessedMIMEType;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) _web_guessedMIMETypeForXML;
 - (id) _web_guessedMIMEType;
 - (id) _web_guessedMIMETypeForExtension:(id)a;
 - (id) _web_parseRFC822HeaderFields;
 - (id) _replaceCString:(r*)awithCString:(r*)b;
 - (BOOL) isNSData__;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)bfreeWhenDone:(BOOL)c;
 - (id) subdataWithRange:({_NSRange=QQ})a;
 - (BOOL) writeToFile:(id)aatomically:(BOOL)b;
 - (Class) classForCoder;
 - (id) replacementObjectForCoder:(id)a;
 - (BOOL) writeToURL:(id)aatomically:(BOOL)b;
 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cdeallocator:(@?)d;
 - (id) initWithBytes:(r^v)alength:(unsigned long long)b;
 - (BOOL) _isDispatchData;
 - (BOOL) isEqualToData:(id)a;
 - (BOOL) _canReplaceWithDispatchDataForXPCCoder;
 - (void) enumerateByteRangesUsingBlock:(@?)a;
 - (BOOL) _isCompact;
 - (BOOL) _copyWillRetain;
 - (BOOL) writeToFile:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)b;
 - (id) initWithContentsOfMappedFile:(id)a;
 - (id) initWithContentsOfFile:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (id) initWithContentsOfURL:(id)aoptions:(unsigned long long)berror:(^@)c;
 - ({_NSRange=QQ}) rangeOfData:(id)aoptions:(unsigned long long)brange:({_NSRange=QQ})c;
 - (BOOL) _decodeBase64EncodedCharacterBuffer:(r*)alength:(unsigned long long)boptions:(unsigned long long)cbuffer:(char*)dbufferLength:(unsigned long long)estate:(^{?=BBQQQI})f;
 - (id) _initWithBase64EncodedObject:(id)aoptions:(unsigned long long)b;
 - (id) _base64EncodingAsString:(BOOL)awithOptions:(unsigned long long)b;
 - (id) _asciiDescription;
 - (BOOL) _allowsDirectEncoding;
 - (void) getBytes:(^v)a;
 - (BOOL) writeToURL:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (id) initWithContentsOfMappedFile:(id)aerror:(^@)b;
 - (id) initWithContentsOfFile:(id)aerror:(^@)b;
 - (id) initWithBase64EncodedString:(id)aoptions:(unsigned long long)b;
 - (id) initWithBase64EncodedData:(id)aoptions:(unsigned long long)b;
 - (id) base64EncodedDataWithOptions:(unsigned long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (r^v) bytes;
 - (void) getBytes:(^v)arange:({_NSRange=QQ})b;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) _cfTypeID;
 - (void) getBytes:(^v)alength:(unsigned long long)b;
 - (id) base64EncodedStringWithOptions:(unsigned long long)a;
 - (BOOL) writeToFile:(id)aatomically:(BOOL)berror:(^@)c;
 - (unsigned long long) length;
 - (id) initWithBytes:(^v)alength:(unsigned long long)bcopy:(BOOL)cfreeWhenDone:(BOOL)dbytesAreVM:(BOOL)e;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithData:(id)a;
 - (id) initWithContentsOfURL:(id)a;
 - (id) initWithBytesNoCopy:(^v)alength:(unsigned long long)bdeallocator:(@?)c;
 - (id) base64Encoding;
 - (id) initWithBase64Encoding:(id)a;
 - (BOOL) _isSafeResumeDataForBackgroundDownload:(int)a;


@end
