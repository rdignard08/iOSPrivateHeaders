
@interface WebCoreSharedBufferData : NSData {

    m_ptr* sharedBufferDataBuffer;
    m_ptr* sharedBuffer;
}
 + (void) initialize;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (unsigned long long) length;
 - (id) initWithSharedBufferDataBuffer:(^{DataBuffer={atomic<int>=Ai}{Vector<char, 0, WTF::CrashOnOverflow>=*II}})a ;
 - (id) initWithMemoryMappedSharedBuffer:(^{SharedBuffer=II{RefPtr<WebCore::SharedBuffer::DataBuffer>=^{DataBuffer}}B{OwnPtr<WebCore::PurgeableBuffer>=^{PurgeableBuffer}}{Vector<WTF::RetainPtr<const __CFData *>, 0, WTF::CrashOnOverflow>=^{RetainPtr<const __CFData *>}II}BI^?^v{RetainPtr<const __CFData *>=^v}})a ;


@end
