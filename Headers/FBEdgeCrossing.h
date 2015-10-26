#import "NSObject.h"

@class FBBezierCurve, FBBezierIntersection;

@interface FBEdgeCrossing : NSObject
{
    BOOL _entry;
    BOOL _processed;
    BOOL _selfCrossing;
    BOOL _fromCrossingOverlap;
    BOOL _suspicious;
    FBBezierCurve *_edge;
    FBEdgeCrossing *_counterpart;
    unsigned long long _index;
    FBBezierIntersection *_intersection;
}

+ (id)crossingWithIntersection:(id)arg1;
@property(readonly, nonatomic) FBBezierIntersection *intersection; // @synthesize intersection=_intersection;
@property(nonatomic, getter=isSuspicious) BOOL suspicious; // @synthesize suspicious=_suspicious;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) BOOL fromCrossingOverlap; // @synthesize fromCrossingOverlap=_fromCrossingOverlap;
@property(nonatomic, getter=isSelfCrossing) BOOL selfCrossing; // @synthesize selfCrossing=_selfCrossing;
@property(nonatomic, getter=isProcessed) BOOL processed; // @synthesize processed=_processed;
@property(nonatomic, getter=isEntry) BOOL entry; // @synthesize entry=_entry;
@property(nonatomic) __weak FBEdgeCrossing *counterpart; // @synthesize counterpart=_counterpart;
@property(nonatomic) __weak FBBezierCurve *edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
@property(readonly, nonatomic, getter=isAtStart) BOOL atStart;
@property(readonly, nonatomic) __weak FBBezierCurve *rightCurve;
@property(readonly, nonatomic) __weak FBBezierCurve *leftCurve;
@property(readonly, nonatomic) __weak FBBezierCurve *curve;
@property(readonly, nonatomic) struct CGPoint location;
@property(readonly, nonatomic) double parameter;
- (id)previousUsingNonself:(BOOL)arg1;
- (id)nextUsingNonself:(BOOL)arg1;
@property(readonly, nonatomic) __weak FBEdgeCrossing *previous;
@property(readonly, nonatomic) __weak FBEdgeCrossing *next;
@property(readonly, nonatomic) double order;
- (void)removeFromEdge;
- (id)initWithIntersection:(id)arg1;

@end
