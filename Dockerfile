FROM ubuntu:18.04

MAINTAINER Helpacksi <oo.helpacksi@gmail.com>

#----- Install packages -----
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    ocaml opam m4\
    xz-utils \
    vim \
    curl \
    openjdk-8-jdk       \
    git maven bc        \
    openssh-server wget \
    build-essential     \
    python-setuptools   \
    python2.7           \
    python2.7-dev       \
    python-pip &&       \
    pip install --upgrade pip virtualenv  && \
    apt-get clean  && \
    rm -rf /var/lib/apt/lists/*


#----- INSTALL CLANG -----
RUN curl -SL https://github.com/llvm/llvm-project/releases/download/llvmorg-10.0.0/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04.tar.xz | tar -xJC . && \
RUN mv clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04 /LLVM_ROOT 

#----- INSTALL PYTHON DEPENDENCIES-----
RUN pip3 install pandas networkx tqdm matplotlib graphviz pydot

# ----- This for debug only -----
RUN wget -O ~/.vimrc https://gist.githubusercontent.com/rahlk/78d3d8f188a099dfd5114c35176e391d/raw/ed47d4fee79b5e177cb008abb319ebe4b542fc75/.vimrc
RUN wget -O ~/.bashrc https://gist.githubusercontent.com/zachbrowne/8bc414c9f30192067831fafebd14255c/raw/322a762de6300c6afff4469c9c73b4dd8449d394/The%2520Ultimate%2520Bad%2520Ass%2520.bashrc%2520File

#----- Set environment variable -----
ENV PATH=/LLVM_ROOT/bin:/root/.opam/system/bin:$PATH
ENV LD_LIBRARY_PATH=/LLVM_ROOT/lib
ENV PYTHONDONTWRITEBYTECODE=1
ENV PYTHONIOENCODING=utf8

CMD ["sh -c bash"]

