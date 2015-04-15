
@protocol NSURLDownloadDecoder;
@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {

    {z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} _stream;
    unsigned long long _modificationTime;
    NSString _filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}
 + (id) MIMEType;
 + (BOOL) decodeDownloadHeader:(id)aheaderLength:(^i)bmodificationTime:(^Q)cfilename:(^@)d;
 + (BOOL) canDecodeDownloadHeaderData:(id)a;

 - (id) fileAttributes;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (id) decodeData:(id)a;
 - (BOOL) isFinishedDecoding;
 - (id) filenameWithOriginalFilename:(id)a;
 - (BOOL) decodeDownloadData:(id)adataForkData:(^@)bresourceForkData:(^@)c;
 - (BOOL) finishDownloadDecoding;


@end
