
@protocol NSURLConnectionDelegate;
@interface WebQuickLookHandleAsDelegate : NSObject <NSURLConnectionDelegate> {

    {RefPtr<WebCore::SynchronousResourceHandleCFURLConnectionDelegate>="m_ptr"^{SynchronousResourceHandleCFURLConnectionDelegate}} m_connectionDelegate;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) connection:(id)adidFailWithError:(id)b;
 - (void) connection:(id)adidReceiveData:(id)blengthReceived:(q)c;
 - (void) connectionDidFinishLoading:(id)a;
 - (void) connection:(id)adidReceiveDataArray:(id)b;
 - (id) initWithConnectionDelegate:(^{SynchronousResourceHandleCFURLConnectionDelegate=^^?{atomic<int>=Ai}^{ResourceHandle}{RetainPtr<const __CFString *>=^v}})a;
 - (void) clearHandle;


@end
