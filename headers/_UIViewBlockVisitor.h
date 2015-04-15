
@interface _UIViewBlockVisitor : _UIViewVisitor {

    @? _visitorBlock;
}

 - (void) dealloc;
 - (id) initWithTraversalDirection:(unsigned long long)avisitorBlock:(@?)b;
 - (BOOL) _visitView:(id)a;
 - (void) setVisitorBlock:(@?)a;
 - (@?) visitorBlock;


@end
