
@interface WebUndoStep : NSObject {

    m_ptr* m_step;
}
 + (void) initialize;
 + (id) stepWithUndoStep:({PassRefPtr<WebCore::UndoStep>=^{UndoStep}})a;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (void) dealloc;
 - (void) finalize;
 - (id) initWithUndoStep:({PassRefPtr<WebCore::UndoStep>=^{UndoStep}})a;
 - (^{UndoStep=^^?I}) step;


@end
