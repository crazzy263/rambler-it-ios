//
//  CellObjectBuilder.h
//  Conferences
//
//  Created by Karpushin Artem on 14/11/15.
//  Copyright © 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PlainEvent;

@protocol CellObjectBuilderProtocol <NSObject>

- (NSArray *)cellObjectsForEvent:(PlainEvent *)event;

@end