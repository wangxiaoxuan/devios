//
//  PlayingCard.h
//  Matchismo
//
//  Created by Xiaoxuan Wang on 14/11/13.
//  Copyright (c) 2013 brandsfever. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
