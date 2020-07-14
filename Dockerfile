FROM rkrsn/cerno:base

MAINTAINER Rahul Krishna <i.m.ralk@gmail.com>

WORKDIR /workspaces

ADD . /workspaces/secern


CMD ["sh -c bash"]

