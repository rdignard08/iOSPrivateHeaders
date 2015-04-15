
@interface _UIViewBlockVisitor : _UIViewVisitor {

    @? _visitorBlock;
}

 - (void) dealloc;
 - (id) initWithTraversalDirection:(unsigned long long)a visitorBlock:(@?)b ;
 - (BOOL) _visitView:(id)a ;
 - (void) setVisitorBlock:(@?)a ;
 - (@?) visitorBlock;


@end
